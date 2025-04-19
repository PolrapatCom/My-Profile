<?php 
session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$category = $_GET['category'];
$sub_category = $_GET['sub_category'];
$order = $_GET['order'];

?>

<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="UTF-8">
		<meta http-equiv="X-UA-Compatible" content="IE=edge">
		<meta name="viewport" content="width=device-width, initial-scale=1.0">
		<title>Forum</title>
		<link href="https://cdn.lineicons.com/4.0/lineicons.css" rel="stylesheet" />
		<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet"
			integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
			<link rel="stylesheet" href="style.css">
		</head>
		<body>
			<?php 
				include('header.php');
				include('config.php');
				if ($order == 1){
					if ($category == 0 AND $sub_category == 0){
						$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1");
					} elseif ($category == 0){
						$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1 AND sub_category = '$sub_category'");
					} elseif ($sub_category == 0) {
						$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1 AND category = '$category'");
					} else {
						$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1 AND category = '$category' AND sub_category = '$sub_category'");
					}
				} else {
					if ($category == 0 AND $sub_category == 0){
						$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1 ORDER BY date_post DESC");
					} elseif ($category == 0){
						$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1 AND sub_category = '$sub_category' ORDER BY date_post DESC");
					} elseif ($sub_category == 0) {
						$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1 AND category = '$category' ORDER BY date_post DESC");
					} else {
						$query = mysqli_query($con, "SELECT * FROM post WHERE status = 1 AND category = '$category' AND sub_category = '$sub_category' ORDER BY date_post DESC");
					}
				}
			 ?>
			<div class="main p-3" style="background-color: #e6f3ff;">
				<link href="https://code.ionicframework.com/ionicons/2.0.1/css/ionicons.min.css" rel="stylesheet">
				<div class="container">
					<div class="row w-100" >
						<!-- Main content -->
						<div class="col-9 me">
							<form action="forum_process.php" method="POST" enctype="multipart/form-data">
								<div class="row text-left mb-3 mt-3">
									<div class="col-lg-4 mb-3 mb-sm-0">
										<div class="dropdown bootstrap-select form-control-lg bg-white bg-op-9 text-sm w-lg-50" style="width: 100%;">
											<select class="form-control form-control-lg bg-white bg-op-9 text-sm w-lg-50" name="category" data-toggle="select" tabindex="-98">
												<option value="0" selected> All subjects/skills </option>
												<optgroup label="Subject based">
													<option value="1"> Thai </option>
													<option value="2"> Social Studies </option>
													<option value="3"> English </option>
													<option value="4"> Math </option>
													<option value="5"> Physic </option>
													<option value="6"> Chemistry </option>
													<option value="7"> Biology </option>
												</optgroup>
												<optgroup label="Skill based">
													<option value="8"> Computer </option>
													<option value="9"> Art and Design </option>
													<option value="10"> Marketing </option>
													<option value="11"> Psychology </option>
													<option value="12"> Foreign Language </option>
												</optgroup>
											</select>
										</div>
									</div>
									<div class="col-lg-4 mb-3 mb-sm-0">
										<div class="dropdown bootstrap-select form-control-lg bg-white bg-op-9 text-sm w-lg-50" style="width: 100%;">
											<select class="form-control form-control-lg bg-white bg-op-9 text-sm w-lg-50" name="sub_category" data-toggle="select" tabindex="-98">
												<option value="0" selected> All types </option>
												<option value="1"> Self-Learning </option>
												<option value="2"> Contest </option>
												<option value="3"> Camp/Workshop </option>
												<option value="4"> Exhibition </option>
											</select>
										</div>
									</div>
									<div class="col-lg-4 mb-3 mb-sm-0">
										<div class="dropdown bootstrap-select form-control-lg bg-white bg-op-9 text-sm w-lg-50" style="width: 100%;">
											<select class="form-control form-control-lg bg-white bg-op-9 text-sm w-lg-50" name="order" data-toggle="select" tabindex="-98">
												<option disabled> Sort By </option>
												<option value="0" selected> Lastest </option>
												<option value="1"> Oldest </option>
											</select>
										</div>
									</div>
											<div class="row mb-3 mt-3 w-100" style="margin-left: 0.05rem;">
		                                    <div class="d-flex justify-content-center" style="">
		                                    <input type='submit' class="form-control btn btn-success" style="width: 98%;" value="Search">
		                                </div>
		                                </div>
								</div>
							</form>
							<?php
					 		$b = array('None', 'Thai', 'Social studies', 'English', 'Math', 'Physics', 'Chemistry', 'Biology', 'Computer', 'Design', 'Business and Marketing', 'Psychology', 'Foreign languages', 'cinco');
					 		$c = array('None', 'Self-learning', 'Contest', 'Camp/Workshop', 'Exhibition');

					 		while ($data = mysqli_fetch_array($query)) {
					 			echo '
						 		<div class="card row-hover pos-relative py-3 px-3 mb-3 border-warning border-0 shadow-sm rounded-0">
									<div class="row align-items-center">
										<div class="col-md-8 mb-3 mb-sm-0">
											<h5>
											<a href="info.php?id_post='.$data['id_post'].'" class="stretched-link" style="font-weight: bold;">'.$data['title'].'</a>
											</h5>
											<p class="text-sm">
												<span class="op-6">Category: '.$b[max((int)$data['category'], 0)].'</span><br>
												<span class="op-6">Sub-Category: '.$c[max((int)$data['sub_category'], 0)].'</span><br>
												<span class="op-6">Description: '.$data['descript'].'</span><br>
												<span class="op-6">Date Posted: '.$data['date_post'].'</span><br>
												<span class="op-6">Date Written: '.$data['written_date_post'].'</span><br>
											</p>
											<div class="text-sm op-5"> </div>
										</div>
										
									</div>
								</div>
						 		';
					 		}
					 		
					 		?>
					 		
							
						</div>
						<!-- Sidebar content -->
						<div class="col-3">
							<div style="visibility: hidden; display: none; width: 285px; height: 801px; margin: 0px; float: none; position: static; inset: 85px auto auto;"></div><div data-settings="{&quot;parent&quot;:&quot;#content&quot;,&quot;mind&quot;:&quot;#header&quot;,&quot;top&quot;:10,&quot;breakpoint&quot;:992}" data-toggle="sticky" class="sticky" style="top: 85px;"><div class="sticky-inner">
							<a class="btn btn-lg btn-block btn-success rounded-0 py-4 mb-3 bg-op-6 roboto-bold" href="request.php">Write Post</a>
							<a class="btn btn-lg btn-block btn-success rounded-0 py-4 mb-3 bg-op-6 roboto-bold" href="request_waiting.php">Pending</a>
							<div class="bg-white text-sm">
								<h4 class="px-3 py-4 op-5 m-0 roboto-bold">
								Stats
								</h4>
								<hr class="my-0">
								<div class="row text-center d-flex flex-row op-7 mx-0">
									<div class="col-sm-6 flex-ew text-center py-3 border-bottom border-right"> <a class="d-block lead font-weight-bold" href="#">58</a> Topics </div>
									<div class="col-sm-6 col flex-ew text-center py-3 border-bottom mx-0"> <a class="d-block lead font-weight-bold" href="#">1.856</a> Posts </div>
								</div>
								<div class="row d-flex flex-row op-7">
									<div class="col-sm-6 flex-ew text-center py-3 border-right mx-0"> <a class="d-block lead font-weight-bold" href="#">300</a> Members </div>
									<div class="col-sm-6 flex-ew text-center py-3 mx-0"> <a class="d-block lead font-weight-bold" href="#">DanielD</a> Newest Member </div>
								</div>
							</div>
						</div></div>
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