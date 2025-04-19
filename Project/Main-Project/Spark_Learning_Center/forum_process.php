<?php 

session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$category = $_POST['category'];
$sub_category = $_POST['sub_category'];
$order = $_POST['order'];
if ($category == 0 AND $sub_category == 0 AND $order == 0){
	echo "<script language='javascript'>";
	echo "location = 'forum.php'";
	echo "</script>";
} else {
	echo "<script language='javascript'>";
	echo "location = 'forum_category.php?category=".$category."&sub_category=".$sub_category."&order=".$order."'";
	echo "</script>";
}



 ?>