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


mysqli_query($con, "UPDATE `request` SET `status` = 0 WHERE `id_request` = '$id_request';");

echo "<script language='javascript'>";
echo "alert('Cancel successfully.');";
echo "location = 'approve.php'";
echo "</script>";


?>
