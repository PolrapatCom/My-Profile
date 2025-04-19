<?php 

session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$id_user = $_SESSION['id_user'];
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
				$query = mysqli_query($con, "SELECT * FROM request WHERE status = 1 AND user_request = '$id_user'");
			 ?>
				<div class="main p-3">
					<div class="d-flex" style="font-size: 2rem; font-weight: bold;">
						User Request Approve
					</div>
					<div class="row gx-4 gx-lg-5 row-cols-2 row-cols-md-3 row-cols-xl-4 justify-content-center">
						<?php
				 		$b = array('None', 'Thai', 'Social studies', 'English', 'Math', 'Physics', 'Chemistry', 'Biology', 'Computer', 'Design', 'Business and Marketing', 'Psychology', 'Foreign languages', 'cinco');
				 		$c = array('None', 'Self-learning', 'Contest', 'Camp/Workshop', 'Exhibition');
				 		function shorten($string, $maxLength) {
						    return substr($string, 0, $maxLength);
						}
				 		while ($data = mysqli_fetch_array($query)) {
				 			echo '
					 		<div class="col mb-4">
								<div class="card h-70">
									<div class="card" >
										<div class="card-body">
											<h5 class="card-title">'.$data['title'].'</h5>
											<h6 class="card-subtitle mb-2 text-muted">Category: '.$b[max((int)$data['category'], 0)].'</h6>
											<h6 class="card-subtitle mb-2 text-muted">Sub-category: '.$c[max((int)$data['sub_category'], 0)].'</h6>
											<p class="card-text">Description: '.$data['descript'].'</p>
											<p class="card-text">Content: '.$data['content'].'</p>
											<div class="text-center"><a class="btn btn-danger mt-auto" href="request_removal_process.php?id_request='.$data['id_request'].'">Cancel</a></div>
										</div>
									</div>
								</div>
							</div>
					 		';
				 		}
				 		
				 		?>
						
						
					</div>
				</div>
			</div>
			<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
			integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe"
			crossorigin="anonymous"></script>
			<script src="script.js"></script>
		</body>
	</html>