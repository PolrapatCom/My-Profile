<?php 

session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}
include('config.php');
$id_request = $_GET['id_request'];
mysqli_query($con, "UPDATE `request` SET `status` = 0 WHERE `id_request` = $id_request");
echo "<script language='javascript'>";
echo "alert('Request canceled.');";
echo "location='request_waiting.php'";
echo "</script>";

 ?>