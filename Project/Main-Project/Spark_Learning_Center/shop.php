<?php 

session_start();

if ($_SESSION['id_user'] == NULL){
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
				$query = mysqli_query($con, "SELECT * FROM item WHERE status = 1");
			 ?>
			<div class="main p-3" style="background-color: #e6f3ff;">
				<section class="" style=" font-weight: bold;">

						<div class="col-md-8" style="float:none;margin:auto;">
					<div class="mm ">
							<div class="p-1 bg-dark mb-2 " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
								<div class="d-flex " style="padding-left: 30px;">
									<div class="p-2" style="color: white;">
										Shop
										<svg xmlns="http://www.w3.org/2000/svg" width="25" height="25" fill="currentColor" class="bi bi-shop" viewBox="0 0 16 16">
											<path d="M2.97 1.35A1 1 0 0 1 3.73 1h8.54a1 1 0 0 1 .76.35l2.609 3.044A1.5 1.5 0 0 1 16 5.37v.255a2.375 2.375 0 0 1-4.25 1.458A2.37 2.37 0 0 1 9.875 8 2.37 2.37 0 0 1 8 7.083 2.37 2.37 0 0 1 6.125 8a2.37 2.37 0 0 1-1.875-.917A2.375 2.375 0 0 1 0 5.625V5.37a1.5 1.5 0 0 1 .361-.976zm1.78 4.275a1.375 1.375 0 0 0 2.75 0 .5.5 0 0 1 1 0 1.375 1.375 0 0 0 2.75 0 .5.5 0 0 1 1 0 1.375 1.375 0 1 0 2.75 0V5.37a.5.5 0 0 0-.12-.325L12.27 2H3.73L1.12 5.045A.5.5 0 0 0 1 5.37v.255a1.375 1.375 0 0 0 2.75 0 .5.5 0 0 1 1 0M1.5 8.5A.5.5 0 0 1 2 9v6h1v-5a1 1 0 0 1 1-1h3a1 1 0 0 1 1 1v5h6V9a.5.5 0 0 1 1 0v6h.5a.5.5 0 0 1 0 1H.5a.5.5 0 0 1 0-1H1V9a.5.5 0 0 1 .5-.5M4 15h3v-5H4zm5-5a1 1 0 0 1 1-1h2a1 1 0 0 1 1 1v3a1 1 0 0 1-1 1h-2a1 1 0 0 1-1-1zm3 0h-2v3h2z"/>
										</svg>
									</div>
								</div>
							</div>
							<div class="row mx-2 gx-4 gx-lg-10 row-cols-2 row-cols-md-3 row-cols-xl-4 justify-content-start pt-3">
								
								<?php
						 		while ($data = mysqli_fetch_array($query)) {
						 			echo '
							 		<div class="col mb-3">
										<div class="card h-70 mm " style="border-radius: 10px;">
											
											<!-- Product details-->
											<div class="card-body p-2">
												<div class="text-center">
													<!-- Product name-->
													<div class="card-body">
														<h5 class="me p-1" style="font-size: 1rem;">'.$data['detail'].'</h5>
														<p class="card-text" style="font-size: 1.3rem;"> '.$data['price'].' P</p>
													</div>
												</div>
											</div>
											<!-- Product actions-->
											<div class="card-footer pt-0 border-top-0 bg-transparent">
												<div class="text-center"><a class="btn btn-outline-dark mt-auto" href="shop_process.php?id_item='.$data['id_item'].'">Buy</a></div>
											</div>
										</div>
									</div>
							 		';
						 		}

						 		?>
								
							</div>
						</div>
					</div>
				</section>
			</div>
		</div>
		<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
		integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe"
		crossorigin="anonymous"></script>
		<script src="script.js"></script>
	</body>
</html>