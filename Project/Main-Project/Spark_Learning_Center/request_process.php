<?php 

$user_request = $_POST['user_request'];
$category = $_POST['category'];
$sub_category = $_POST['sub_category'];
$title = $_POST['title'];
$descript = $_POST['desc'];
$content = $_POST['content'];

include('config.php');
mysqli_query($con, "INSERT INTO `request` (`id_request`, `user_request`, `category`, `sub_category`, `title`, `descript`, `content`, `date_request`, `status`) VALUES (NULL, '$user_request', '$category', '$sub_category', '$title', '$descript', '$content', current_timestamp(), 1);");

echo "<script language='javascript'>";
echo "alert('Request sent successfully.');";
echo "location = 'forum.php'";
echo "</script>";


 ?>