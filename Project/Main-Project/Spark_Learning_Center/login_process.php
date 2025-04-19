<?php 
session_start();

$email = $_POST['email'];
$password = $_POST['password'];

include('config.php');
$query = mysqli_query($con, "SELECT * FROM user WHERE !(status = 0) AND email = '$email' AND password = '$password'");
$data = mysqli_fetch_array($query);

$check = mysqli_num_rows($query);
if ($check > 0){
	if ($data['status'] == 2){
		echo "<script language='javascript'>";
		$_SESSION['id_user'] = 'admin';
		echo "location='admin.php'";
		echo "</script>";
		exit();
	}
	echo "<script language='javascript'>";
	$_SESSION['id_user'] = $data['id_user'];
	echo "location='index.php'";
	echo "</script>";
} else {
	echo "<script language='javascript'>";
	echo "alert('Incorrect username or password');";
	echo "location='login.php'";
	echo "</script>";
}

 ?>