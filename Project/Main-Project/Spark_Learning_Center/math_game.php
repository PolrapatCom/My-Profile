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
$query = mysqli_query($con, "SELECT * FROM user WHERE id_user = '$id_user'");
$data = mysqli_fetch_array($query);
$level = $data['game_level'];
$exp = $data['exp'];
$point = $data['point'];
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
				<div class="mm" style="height:auto;" >
					<div class="p-1 bg-dark mb-2 " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
						<div class="d-flex justify-content-between" style="padding-left: 30px;">
							<div class="p-2" style="color: white;">
								Game
								<svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor" class="bi bi-dice-5-fill" viewBox="0 0 16 16">
									<path d="M3 0a3 3 0 0 0-3 3v10a3 3 0 0 0 3 3h10a3 3 0 0 0 3-3V3a3 3 0 0 0-3-3zm2.5 4a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0m8 0a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0M12 13.5a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3M5.5 12a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0M8 9.5a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3"/>
								</svg>
							</div>
							<div class="p-2" style="color: white;">
								Your Level: <?php echo $level?>
								Exp: <?php echo $exp?>
							</div>
						</div>
					</div>

					<div class="row mx-2">
						<?php 
							if ($level >= 1){
								echo '<div class="col mb-4">
										<div class="card h-70">
											<div class="card" >
												<div class="card-body">
													
													
													<p class="card-text">Level 1</p>
													
													<div class="text-center"><a class="btn btn-outline-primary" href="math_game1.php">Play</a></div>
												</div>
											</div>
										</div>
									</div>';
							}
							if ($level >= 2) {
								echo '<div class="col mb-4">
										<div class="card h-70">
											<div class="card" >
												<div class="card-body">
													
													
													<p class="card-text">Level 2</p>
													
													<div class="text-center"><a class="btn btn-outline-primary" href="math_game2.php">Play</a></div>
												</div>
											</div>
										</div>
									</div>';
							}
							//if ($level >= 3) {
							//	echo "<li class='h4'><a href='math_game3.php'>Level 3</a></li>";
							//}
							//if ($level >= 4) {
							//	echo "<li class='h4'><a href='math_game4.php'>Level 4</a></li>";
							//}
							//if ($level >= 5) {
							//	echo "<li class='h4'><a href='math_game5.php'>Level 5</a></li>";
							//}						 ?>
						
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