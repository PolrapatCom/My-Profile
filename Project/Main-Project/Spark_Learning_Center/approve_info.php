<?php 
session_start();

if ($_SESSION['id_user'] != 'admin'){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$id_request = $_GET['id_request'];

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
			include('config.php');

			$query = mysqli_query($con, "SELECT * FROM request WHERE status = 1 AND id_request = '$id_request'");
			$data = mysqli_fetch_array($query);
			$id_user = $data['user_request'];
			$query_user = mysqli_query($con, "SELECT * FROM user WHERE status = 1 AND id_user = '$id_user'");

			$data_user = mysqli_fetch_array($query_user);

			$b = array('None', 'Thai', 'Social studies', 'English', 'Math', 'Physics', 'Chemistry', 'Biology', 'Computer', 'Design', 'Business and Marketing', 'Psychology', 'Foreign languages', 'cinco');
			$c = array('None', 'Self-learning', 'Contest', 'Camp/Workshop', 'Exhibition');
			 ?>
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
				<div class="col-md-9" style="float:none;margin:auto;">
					<div class="col-md-12" >
						<div class="mm" style="height:auto">
							<div class="p-1 bg-dark mb-2 " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
								<div class="d-flex" style="padding-left: 30px;">
									<div class="p-2" style="color: white;">
										Admin Detailed
									</div>
								</div>
							</div>
							<div class="col-md-12 mb-3 mb-sm-0">
								<h5>
								<p class="row pb-4">
									<span class="d-flex h1" style="padding-left:2rem; font-weight: bold;"><?php echo $data['title'] ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem;">Category: <?php echo $b[max((int)$data['category'], 0)]; ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem;">Sub-Category: <?php echo $c[max((int)$data['sub_category'], 0)]; ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem;">Description: <?php echo $data['descript'] ?></span>
									<span class="d-flex my-1" style="padding-left:2rem;">User Written: <?php echo $data_user['username'] ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem;">Date Written: <?php echo $data['date_request'] ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem; text-align: left;">Content:<br> <?php echo $data['content'] ?>
									</span><br>
									
								</p>
								<div class="text-sm op-5"> </div>
								<div class="form-group m-3" style="float: right;">
									<a href="approve_process.php?id_request=<?php echo $data['id_request'] ?>">
										<button type="submit" class="btn btn-primary">
										Approve
										</button>
										</a>
										<a href="approve_cancel_process.php?id_request=<?php echo $data['id_request'] ?>">
										<button class="btn btn-danger">
										Cancel
										</button>
										</a>
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