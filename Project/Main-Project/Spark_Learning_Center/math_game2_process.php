<?php 

session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$id_user = $_SESSION['id_user'];
include('config.php');
$query = mysqli_query($con, "SELECT * FROM user WHERE status = 1 AND id_user = '$id_user'");
$data = mysqli_fetch_array($query);
$level = $data['game_level'];
$exp = $data['exp'];
$point = $data['point'];
if ($level < 2){
	echo "<script language='javascript'>";
	echo "alert('You cannot access this.');";
	echo "location='math_game.php'";
	echo "</script>";
	exit();
}

mysqli_query($con, "UPDATE `user` SET `exp` = $exp+1, `point` = $point+1 WHERE `id_user` = '$id_user'");
if ($data['exp'] == $level*10-1) {
  	mysqli_query($con, "UPDATE `user` SET `game_level` = $level+1, `exp` = 0 WHERE `id_user` = '$id_user'");
	echo "<script language='javascript'>";
	echo "alert('Level up!');";
	echo "location='math_game2.php'";
	echo "</script>";
} else {
	echo "<script language='javascript'>";
	echo "location='math_game2.php'";
	echo "</script>";
}



 ?>