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
		<title>Learning Center</title>
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

					<div class="row">
						<div class="col-md-6">
							<div class="row">
								<div class="col-md-12 " >
									<div class="mm" style="height:30rem;" >
										<div class="p-1 bg-dark mb-2 " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
											<div class="d-flex" style="padding-left: 30px;">
												<div class="p-2" style="color: white;">
													Game
													<svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor" class="bi bi-dice-5-fill" viewBox="0 0 16 16">
														<path d="M3 0a3 3 0 0 0-3 3v10a3 3 0 0 0 3 3h10a3 3 0 0 0 3-3V3a3 3 0 0 0-3-3zm2.5 4a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0m8 0a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0M12 13.5a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3M5.5 12a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0M8 9.5a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3"/>
													</svg>
												</div>
											</div>
										</div>
										<div class="row">
											<div class="col">
												<div class="d-flex d-flex justify-content-center">
													<div class="card shadow-sm border-0" style="width: 18rem;">
														<img class="card-img-top" src="./brand/Math.png" alt="Card image cap" >
														<div class="card-body" style="font-size: 20px;">
															<p class="card-text">Math Game</p>
															<a href="math_game.php" class="stretched-link"></a>
														</div>
													</div>
												</div>
											</div>
											<div class="col">
												<div class="d-flex d-flex justify-content-center">
													<div class="card shadow-sm border-0" style="width: 18rem;">
														<img class="card-img-top" src="./brand/ComingSoon.png" alt="Card image cap">
														<div class="card-body" style="font-size: 20px;">
															<p class="card-text">COMING SOON</p>
														</div>
													</div>
												</div>
											</div>
										</div>
									</div>
								</div>
								
							</div>
							<div class="row">
								<div class="col-md-12" style="padding-top: 30px; ">
									<div class="mm" style="height:18rem">
										<div class="p-1 bg-dark mb-2 " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
											<div class="d-flex" style="padding-left: 30px;">
												<div class="p-2" style="color: white;">
													 Shop
													<svg xmlns="http://www.w3.org/2000/svg" width="25" height="25" fill="currentColor" class="bi bi-stars" viewBox="0 0 16 16">
													<path d="M7.657 6.247c.11-.33.576-.33.686 0l.645 1.937a2.89 2.89 0 0 0 1.829 1.828l1.936.645c.33.11.33.576 0 .686l-1.937.645a2.89 2.89 0 0 0-1.828 1.829l-.645 1.936a.361.361 0 0 1-.686 0l-.645-1.937a2.89 2.89 0 0 0-1.828-1.828l-1.937-.645a.361.361 0 0 1 0-.686l1.937-.645a2.89 2.89 0 0 0 1.828-1.828zM3.794 1.148a.217.217 0 0 1 .412 0l.387 1.162c.173.518.579.924 1.097 1.097l1.162.387a.217.217 0 0 1 0 .412l-1.162.387A1.73 1.73 0 0 0 4.593 5.69l-.387 1.162a.217.217 0 0 1-.412 0L3.407 5.69A1.73 1.73 0 0 0 2.31 4.593l-1.162-.387a.217.217 0 0 1 0-.412l1.162-.387A1.73 1.73 0 0 0 3.407 2.31zM10.863.099a.145.145 0 0 1 .274 0l.258.774c.115.346.386.617.732.732l.774.258a.145.145 0 0 1 0 .274l-.774.258a1.16 1.16 0 0 0-.732.732l-.258.774a.145.145 0 0 1-.274 0l-.258-.774a1.16 1.16 0 0 0-.732-.732L9.1 2.137a.145.145 0 0 1 0-.274l.774-.258c.346-.115.617-.386.732-.732z"/>
												</svg>
											</div>
										</div>
									</div>
									<div class="row p-2 mx-2" style="font-size: 1.75rem;">
										Nametags
									</div>
									<div class="container-fluid">
										<div class="row">
											<div class="row flex-nowrap overflow-auto mx-2 shadow-sm border-0" style="width: 40rem;">
												<?php
										 		while ($data = mysqli_fetch_array($query)) {
										 			echo '
													<div class="card text-center mx-1 shadow-sm border-0" style="width: 10rem; height: 6.5rem;">	
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
													</div>
											 		';
										 		}

										 		?>
												
											</div>
												<a href="shop.php" class="btn btn-dark" style="font-size: 1.5rem; color: white; display: table-cell;vertical-align: middle; width: auto;line-height: 6rem;">
													buy now
												</a>
										</div>
									</div>
									
								</div>
							</div>
							
						</div>
					</div>
					<div class="col-md-6">
						<div class="mm " style=" height:auto; border-bottom-left-radius: 5px;">
							<div class="p-3 bg-dark text-white " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
								<div class="row">
									<div class="d-flex justify-content-between" style="padding-left: 30px;">
										<div class="p-2">Forum <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor" class="bi bi-save-fill" viewBox="0 0 16 16">
											<path d="M8.5 1.5A1.5 1.5 0 0 1 10 0h4a2 2 0 0 1 2 2v12a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2V2a2 2 0 0 1 2-2h6c-.314.418-.5.937-.5 1.5v7.793L4.854 6.646a.5.5 0 1 0-.708.708l3.5 3.5a.5.5 0 0 0 .708 0l3.5-3.5a.5.5 0 0 0-.708-.708L8.5 9.293z"/>
										</svg></div>
										<div class="p-2">
											<a href="forum.php" style="font-size: 20px; color: white; text-decoration: underline;">
												see all
											</a>
										</div>
									</div>
								</div>
							</div>
							<div class="d-flex flex-column overflow-auto " style="height:44rem">
								<?php 
									$query_forum = mysqli_query($con, "SELECT * FROM post WHERE status = 1 ORDER BY date_post DESC");
								?>
								<?php
						 		$b = array('None', 'Thai', 'Social studies', 'English', 'Math', 'Physics', 'Chemistry', 'Biology', 'Computer', 'Design', 'Business and Marketing', 'Psychology', 'Foreign languages', 'cinco');
						 		$c = array('None', 'Self-learning', 'Contest', 'Camp/Workshop', 'Exhibition');

						 		while ($data = mysqli_fetch_array($query_forum)) {
						 			echo '
							 		<div class="card shadow-sm border-0" style="width: auto;margin: 0.15em;">
										<div class="card-body ">
											<h5 class="card-title d-flex" style="font-size:1.3rem ; font-weight: bold; ">'.$data['title'].'</h5>
											<h6 class="card-subtitle mb-2 text-muted d-flex ">
											<div class="me mx-1" style="font-size: 15px; color: blue;">
												'.$b[max((int)$data['category'], 0)].'
											</div>
											<div class="me mx-1" style="font-size: 15px; color: blue;">
												'.$c[max((int)$data['sub_category'], 0)].'
											</div>
											</h6>
											<p class="card-text d-flex" style="font-size:1.14rem ;font-weight: normal;">'.$data['descript'].'</p>
											
											<a href="info.php?id_post='.$data['id_post'].'" class="stretched-link"></a>
										</div>
									</div>
							 		';
						 		}
						 		
						 		?>
						 		
								<br/>
								<br/>
								<br/>
								<br/>
								<br/>
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