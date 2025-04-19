<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="UTF-8">
		<meta http-equiv="X-UA-Compatible" content="IE=edge">
		<meta name="viewport" content="width=device-width, initial-scale=1.0">
		<title>Admin Panel</title>
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
				<div class="main p-3 mm" style="background-color: #e6f3ff;" >
					<div class="card text-center mx-1" style="width: 10rem; height: 6.5rem;">
						<div class="card-body">
							<p class="card-text" style="font-size: 1.5rem;"> Approval</p>
							<a href="approve.php" class="stretched-link"></a>
						</div>
					</div>
					<div class="card text-center mx-1 mt-3" style="width: 10rem; height: 6.5rem;">
						<div class="card-body">
							<p class="card-text" style="font-size: 1.5rem;"> Add item</p>
							<a href="shop_add.php" class="stretched-link"></a>
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