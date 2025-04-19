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
		<title>Add Item</title>
		<link href="https://cdn.lineicons.com/4.0/lineicons.css" rel="stylesheet" />
		<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet"
			integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
			<link rel="stylesheet" href="style.css">
		</head>
		<body>
			<nav class="navbar navbar-expand-lg navbar-light " style="background-color: #0e2238;">
				<div class="container-fluid">
					<button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarTogglerDemo01" aria-controls="navbarTogglerDemo01" aria-expanded="false" aria-label="Toggle navigation">
					<span class="navbar-toggler-icon"></span>
					</button>
					<div class="collapse navbar-collapse" id="navbarTogglerDemo01">
						<a class="navbar-brand" href="admin.php" style="color: white;">
							<img src="./brand/branding.png" alt="" width="60" height="50" class="d-inline-block align-text-center" >
							Learning Center Admin control panel
						</a>
						<ul class="navbar-nav me-auto mb-2 mb-lg-0">
							
						</ul>
					</div>
				</div>
			</nav>
			
			<div class="wrapper">
				<aside id="sidebar">
					<div class="d-flex">
						<button class="toggle-btn" type="button">
						<i class="lni lni-arrows-horizontal"></i>
						</button>
						<div class="sidebar-logo">
							<a href="#"></a>
						</div>
					</div>
					<ul class="sidebar-nav">
						<li class="sidebar-item">
							<a href="approve.php" class="sidebar-link">
								<i class="lni lni-user"></i>
								<span>Approval</span>
							</a>
						</li>
						<li class="sidebar-item">
							<a href="shop_add.php" class="sidebar-link">
								<i class="lni lni-home"></i>
								<span>Add item</span>
							</a>
						</li>
					</ul>
					<div class="sidebar-footer">
						<a href="logout.php" class="sidebar-link">
							<i class="lni lni-exit"></i>
							<span>Logout</span>
						</a>
					</div>
				</aside>
				<div class="main p-3" style="background-color: #e6f3ff;">
					<div class="d-flex" style="font-size: 2rem; font-weight: bold;">
						Add item
					</div>
					<form action="shop_add_process.php" method="POST">
									<div class="form-group mb-2">
										<label class="label" for="name" style="font-weight: bold;font-size: 1.5rem;">Name tag</label>
										<input input type="text" name="detail" placeholder="Name" class="form-control" required>
									</div>
									<div class="form-group mb-2">
										<label class="label" for="name" style="font-weight: bold;font-size: 1.5rem;">Price</label>
										<input type="text" name="price" placeholder="Price" class="form-control" required>
									</div>
									<div class="form-group">
										<button type="submit" class="form-control btn btn-primary submit px-3 mt-2">Add</button>
									</div>
									
								</form>

					<?php 
					include('config.php');
					$query = mysqli_query($con, "SELECT * FROM item WHERE status = 1");
					 ?>
					<div class="container px-4 px-lg-5 mt-5">
							<div class="row gx-4 gx-lg-5 justify-content-center">
								<?php
						 		while ($data = mysqli_fetch_array($query)) {
						 			echo '
							 		<div class="col mb-4">
										<div class="card h-70">
											
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
											</div>
										</div>
									</div>
							 		';
						 		}

						 		?>
								
								
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