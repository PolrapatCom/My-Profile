<?php 

session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

 ?>

<?php 

$detail = $_POST['detail'];
$price = $_POST['price'];


include('config.php');
mysqli_query($con, "INSERT INTO `item` (`id_item`, `detail`, `price`, `status`) VALUES (NULL, '$detail', '$price', 1);");

echo "<script language='javascript'>";
echo "alert('Added successfully.');";
echo "location = 'shop_add.php'";
echo "</script>";

 ?>