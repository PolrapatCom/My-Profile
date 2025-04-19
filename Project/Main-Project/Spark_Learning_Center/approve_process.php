<?php 
session_start();

if ($_SESSION['id_user'] != 'admin'){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$id_request = $_GET['id_request'];
include('config.php');


$query = mysqli_query($con, "SELECT * FROM request WHERE status = 1 AND id_request = '$id_request'");
$data = mysqli_fetch_array($query);
$user_request = $data['user_request'];
$category = $data['category'];
$sub_category = $data['sub_category'];
$title = $data['title'];
$descript = $data['descript'];
$content = $data['content'];
$date_request = $data['date_request'];

mysqli_query($con, "UPDATE `request` SET `status` = 0 WHERE `id_request` = '$id_request';");
mysqli_query($con, "INSERT INTO `post` (`id_post`, `user_post`, `category`, `sub_category`, `title`, `descript`, `content`, `date_post`, `written_date_post`, `status`) VALUES (NULL, '$user_request', '$category', '$sub_category', '$title', '$descript', '$content', current_timestamp(), '$date_request', 1);");

echo "<script language='javascript'>";
echo "alert('Approved successfully.');";
echo "location = 'approve.php'";
echo "</script>";


?>
