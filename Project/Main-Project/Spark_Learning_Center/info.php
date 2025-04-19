<?php 
session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$id_post = $_GET['id_post'];
include('config.php');


$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1 AND id_post = '$id_post'");
$data = mysqli_fetch_array($query);
$title = $data['title'];


$b = array('None', 'Thai', 'Social studies', 'English', 'Math', 'Physics', 'Chemistry', 'Biology', 'Computer', 'Design', 'Business and Marketing', 'Psychology', 'Foreign languages', 'cinco');
$c = array('None', 'Self-learning', 'Contest', 'Camp/Workshop', 'Exhibition');

$title = $data['title'];
$category = $b[max((int)$data['category'], 0)];
$sub_category = $c[max((int)$data['sub_category'], 0)];
$descript = $data['descript'];
$date_post = $data['date_post'];
$written_date_post = $data['written_date_post'];
$content = $data['content'];
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
				<div class="col-md-9" style="float:none;margin:auto;">
					<div class="col-md-12" >
						<div class="mm" style="height:auto">
							<div class="p-1 bg-dark mb-2 " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
								<div class="d-flex" style="padding-left: 30px;">
									<div class="p-2" style="color: white;">
										Detailed
									</div>
								</div>
							</div>
							<div class="col-md-12 mb-3 mb-sm-0">
								<h5>
								<p class="row">
									<span class="d-flex h1" style="padding-left:2rem; font-weight: bold;"><?php echo $title ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem;">Category: <?php echo $category ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem;">Sub-Category: <?php echo $sub_category ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem;">Description: <?php echo $descript ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem; text-align: left;">Content: <?php echo $content ?></span><br>
									<span class="d-flex my-1 pt-5" style="padding-left:2rem;">Date Posted: <?php echo $date_post ?></span><br>
									<span class="d-flex my-1" style="padding-left:2rem;">Date Written: <?php echo $written_date_post ?></span><br>
								</p>
								<div class="text-sm op-5"> </div>
							</div>
							<div class="form-group mt-4">
								<a class="form-control btn btn-dark submit px-3 mt-2 mx-6" href="forum.php" style="font-weight: bold;width: 10rem;">Go back</a>
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