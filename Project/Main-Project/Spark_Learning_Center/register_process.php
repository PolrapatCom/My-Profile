<?php 

$username = $_POST['username'];
$password = $_POST['password'];
$email = $_POST['email'];


include('config.php');
mysqli_query($con, "INSERT INTO `user` (`id_user`, `username`, `email`, `password`, `verification_code`, `email_verified_at`, `level`, `game_level`, `exp`, `point`, `status`) VALUES (NULL, '$username', '$email', '$password', 0, NULL, 0, 1, 0, 0, 1);");

echo "<script language='javascript'>";
echo "alert('Registered successfully.');";
echo "location = 'login.php'";
echo "</script>";

 ?>