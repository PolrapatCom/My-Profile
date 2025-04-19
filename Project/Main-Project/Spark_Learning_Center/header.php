<?php 

$id_user = $_SESSION['id_user'];
include('config.php');
$query = mysqli_query($con, "SELECT * FROM user WHERE id_user = '$id_user'");
$data = mysqli_fetch_array($query);
$point = $data['point'];
 ?>

<nav class="navbar navbar-expand-lg navbar-light " style="background-color: #0e2238;">
				<div class="container-fluid">
					<button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarTogglerDemo01" aria-controls="navbarTogglerDemo01" aria-expanded="false" aria-label="Toggle navigation">
					<span class="navbar-toggler-icon"></span>
					</button>
					<div class="collapse navbar-collapse" id="navbarTogglerDemo01">
						<a class="navbar-brand" href="index.php" style="color: white;">
							<img src="./brand/branding.png" alt="" width="60" height="50" class="d-inline-block align-text-center" >
							Learning Center
						</a>
						<ul class="navbar-nav me-auto mb-2 mb-lg-0">
							
						</ul>
						<div class="d-flex">
							<div class="mx-4 mt-2" style="color: white; font-size: 2rem; font-weight: bold;  ">
								<?php echo $point?> P
							</div>
							<a class="navbar-brand" href="profile.php">
								<img src="./brand/3135715.png" alt="" width="50" height="50" class="d-inline-block align-text-top">
							</a>
						</div>
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
							<a href="profile.php" class="sidebar-link">
								<i class="lni lni-user"></i>
								<span>Profile</span>
							</a>
						</li>
						<li class="sidebar-item">
							<a href="index.php" class="sidebar-link">
								<i class="lni lni-home"></i>
								<span>Home</span>
							</a>
						</li>
						<li class="sidebar-item">
							<a href="forum.php" class="sidebar-link">
								<i class="lni lni-folder"></i>
								<span>Forum</span>
							</a>
						</li>
						<li class="sidebar-item">
							<a href="math_game.php" class="sidebar-link">
								<i class="lni lni-game"></i>
								<span>Game</span>
							</a>
						</li>
						<li class="sidebar-item">
							<a href="shop.php" class="sidebar-link">
								<i class="lni lni-shopping-basket"></i>
								<span>Shop</span>
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