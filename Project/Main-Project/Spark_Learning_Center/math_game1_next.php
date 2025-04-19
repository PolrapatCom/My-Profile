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
if ($level < 1){
	echo "<script language='javascript'>";
	echo "alert('You cannot access this.');";
	echo "location='math_game.php'";
	echo "</script>";
	exit();
}
// mysqli_query($con, "UPDATE `user` SET `exp` = $exp+1 WHERE `id_user` = '$id_user';")
 ?>

<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="UTF-8">
		<meta http-equiv="X-UA-Compatible" content="IE=edge">
		<meta name="viewport" content="width=device-width, initial-scale=1.0">
		<title>Sidebar With Bootstrap</title>
		<link href="https://cdn.lineicons.com/4.0/lineicons.css" rel="stylesheet" />
		<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet"
			integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
			<link rel="stylesheet" href="style.css">
		</head>
		<body>
			<?php
				include 'header.php';
			?>
			<div class="main p-3" style="background-color: #e6f3ff;">
				<div class="col-md-5" style="float:none;margin:auto;">
					<div class="col-md-12" >
						<div class="mm" style="height:auto">
							<div class="p-1 bg-dark mb-2 " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
								<div class="d-flex" style="padding-left: 30px;">
									<div class="p-2" style="color: white;">
										Result
										<svg xmlns="http://www.w3.org/2000/svg" width="25" height="25" fill="currentColor" class="bi bi-joystick" viewBox="0 0 16 16">
										  <path d="M10 2a2 2 0 0 1-1.5 1.937v5.087c.863.083 1.5.377 1.5.726 0 .414-.895.75-2 .75s-2-.336-2-.75c0-.35.637-.643 1.5-.726V3.937A2 2 0 1 1 10 2"/>
										  <path d="M0 9.665v1.717a1 1 0 0 0 .553.894l6.553 3.277a2 2 0 0 0 1.788 0l6.553-3.277a1 1 0 0 0 .553-.894V9.665c0-.1-.06-.19-.152-.23L9.5 6.715v.993l5.227 2.178a.125.125 0 0 1 .001.23l-5.94 2.546a2 2 0 0 1-1.576 0l-5.94-2.546a.125.125 0 0 1 .001-.23L6.5 7.708l-.013-.988L.152 9.435a.25.25 0 0 0-.152.23"/>
										</svg>
									</div>
								</div>
							</div>
							<div>
								Correct! You gained 1 exp + 1 point!
							</div>
							<div class="form-group mt-4">
								<a href="math_game1_process.php"><button type="submit" class="form-control btn btn-dark submit px-3 mt-2 mx-6" style="font-weight: bold;width: 10rem;">Next</button></a>
							</div>
						</div>
					</div>
				</div>
				<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
				integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe"
				crossorigin="anonymous"></script>
				<script src="script.js"></script>
			</body>
		</html>