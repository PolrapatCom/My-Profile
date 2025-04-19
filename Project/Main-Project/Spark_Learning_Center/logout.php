<?php 

session_start();
$_SESSION['id_user'] = NULL;

echo "<script language='javascript'>";
echo "location = 'login.php'";
echo "</script>";

 ?>