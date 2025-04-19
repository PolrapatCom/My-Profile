<?php 

session_start();
if ($_SESSION['id_user'] == NULL OR $_SESSION['id_user'] == 'admin'){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

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
				include('header.php');
				include('config.php');
				$id_user = $_SESSION['id_user'];
				$query = mysqli_query($con, "SELECT * FROM user WHERE status = 1 AND id_user = '$id_user'");
				$data = mysqli_fetch_array($query);
			 ?>
				<div class="main p-3" style="background-color: #e6f3ff;">
					<div class="row">
						<div class="col-md-12">
							<div class="row" >
								<div class="col-md-8 " >
									<div class="mm" style="height:360px;" >
										<div class="d-flex" style="padding: 5%">
											<div class="p-2">
												<img src="./brand/profile.png" alt="" width="200" height="200" class="d-inline-block align-text-center" >
											</div>
											<div class="p-3">
												<div class="row">
													<?php echo $data['username'] ?>
												</div>
												<div class="row" style="font-size: 30px;">
													Game Level: <?php echo $data['game_level'] ?>
												</div>
												<div class="row" style="font-size: 30px; padding-top: 40px;" >
													<?php 
													$query_bought = mysqli_query($con, "SELECT * FROM bought WHERE status = 1 AND user_bought = '$id_user'");
													 ?>
													 <?php
												 		while ($data_bought = mysqli_fetch_array($query_bought)) {
												 			$item_bought = $data_bought['item_bought'];
												 			$query_item = mysqli_query($con, "SELECT * FROM item WHERE status = 1 AND id_item = '$item_bought'");
												 			$data_item = mysqli_fetch_array($query_item);
												 			echo '
													 		<div class="col-6">
																<div class="me" style="height:40px;font-size: 30px;width: 80px;" >
																	'.$data_item['detail'].'
																</div>
															</div>
													 		';
												 		}
											 		?>
												</div>
											</div>
										</div>
									</div>
								</div>
								<div class="col-md-4 " >
									<div class="mm" style="height:360px;padding: 5%" >
										<div class= "row">
											POINTS
										</div>
										<div class= "d-flex justify-content-center" style="padding-top: 40px;font-size: 100px;">
											<?php echo $data['point'] ?> P
										</div>
										
									</div>
								</div>
								
							</div>
							<div class="row" style="padding-top: 30px;">
								<div class="col-md-4 " >
									<div class="mm" style="height:360px;padding: 5%" >
										<div class= "row">
											EXP
										</div>
										<div class= "d-flex justify-content-center" style="padding-top: 40px;font-size: 100px;">
											<?php echo $data['exp'] ?> EXP
										</div>
										
									</div>
								</div>
								<div class="col-md-8	 " >
									<div class="mm" style="height:360px;padding: 2%" >
										ACHEIVEMENT
										<div class="card" style="width: 17%;" >
											<img class="card-img-top" src="./brand/math.png" alt="Card image cap">
											<div class="card-body" style="font-size: 20px;">
												<p class="card-text">Welcome.</p>
											</div>
										</div>
									</div>
								</div>
							</div>
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