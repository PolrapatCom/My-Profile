<?php 
session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$id_item = $_GET['id_item'];
$id_user = $_SESSION['id_user'];

include('config.php');

$query_item = mysqli_query($con, "SELECT * FROM item WHERE status = 1 AND id_item = '$id_item'");
$data_item = mysqli_fetch_array($query_item);
$query_user = mysqli_query($con, "SELECT * FROM user WHERE status = 1 AND id_user = '$id_user'");
$data_user = mysqli_fetch_array($query_user);
$query_bought = mysqli_query($con, "SELECT * FROM bought WHERE status = 1 AND user_bought = '$id_user' AND item_bought = '$id_item'");
$check = mysqli_num_rows($query_bought);

$point = $data_user['point'];
$price = $data_item['price'];

if ($check > 0) {
	echo "<script language='javascript'>";
	echo "alert('You have already bought this item.');";
	echo "location = 'shop.php'";
	echo "</script>";
}
elseif ((int)$point < (int)$price)
{
	echo "<script language='javascript'>";
	echo "alert('You don\'t have enough points.');";
	echo "location = 'shop.php'";
	echo "</script>";
}
else{
	mysqli_query($con, "INSERT INTO `bought` (`id_bought`, `user_bought`, `item_bought`, `status`) VALUES (NULL, '$id_user', '$id_item', 1);");
	mysqli_query($con, "UPDATE `user` SET `point` = $point-$price WHERE `id_user` = '$id_user';");


	echo "<script language='javascript'>";
	echo "alert('Purchased successfully.');";
	echo "location = 'shop.php'";
	echo "</script>";
}


?>

