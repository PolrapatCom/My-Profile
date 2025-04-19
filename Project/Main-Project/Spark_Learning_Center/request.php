<?php 
session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}
include('config.php');
$id_user = $_SESSION['id_user'];
$query = mysqli_query($con, "SELECT * FROM user WHERE status = 1 AND id_user = '$id_user'");
$data = mysqli_fetch_array($query);
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
					<div class="container-fluid">
						<div class="row">
							
							<div class="col-md-10 col-md-offset-3">
								
								<h1>Create post</h1>
								
								<form action="request_process.php" method="POST" enctype="multipart/form-data">
									<input type="hidden" name="user_request" value="<?php echo $data['id_user'] ?>">
									<div class="form-group mt-3">
										<label for="description">Category <span class="require">*</label>
										<select class="form-control form-control-lg bg-white bg-op-9 ml-auto text-sm w-lg-50" name="category" data-toggle="select" tabindex="-98" style="font-size: 1rem;">
												<option disabled selected>Select category</option>
												<optgroup label="Subject based">
												  <option value="1">Thai</option>
												  <option value="2">Social studies</option>
												  <option value="3">English</option>
												  <option value="4">Math</option>
												  <option value="5">Physic</option>
												  <option value="6">Chemistry</option>
												  <option value="7">Biology</option>
												</optgroup>
												<optgroup label="Skill based">
												  <option value="8">Computer</option>
												  <option value="9">Art and Design</option>
												  <option value="10">Marketing</option>
												  <option value="11">Psychology</option>
												  <option value="12">Foreign Language</option>
											  	</optgroup>
										</select>
									</div>
									<div class="form-group mt-3">
										<label for="description">Sub-category <span class="require">*</label>
										<select class="form-control form-control-lg bg-white bg-op-9 ml-auto text-sm w-lg-50" name="sub_category" data-toggle="select" tabindex="-98" style="font-size: 1rem;">
												<option disabled selected>Select type</option>
												<option value="1">Self-learning</option>
												<option value="2">Contest</option>
												<option value="3">Camp/Workshop</option>
												<option value="4">Exhibition</option>
										</select>
									</div>

									<div class="form-group">
										<label for="title">Title <span class="require">*</span></label>
										<input type="text" name="title" placeholder="title" class="form-control">
									</div>
									
									<div class="form-group">
										<label for="description">Description</label>
										<textarea rows="5" class="form-control" name="desc" ></textarea>
									</div>

									<div class="form-group">
										<label for="description">Content</label>
										<textarea rows="5" class="form-control" name="content" ></textarea>
									</div>
									
									
									<div class="form-group m-3" style="float: right;">
										<button type="submit" class="btn btn-primary">
										Create
										</button>
										<a href="forum.php">
											<div class="btn btn-default">
											Cancel
											</div>
										</a>
									</div>
									
								</form>
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