<?php 

session_start();

if ($_SESSION['id_user'] == NULL){
	echo "<script language='javascript'>";
	echo "location='login.php'";
	echo "</script>";
	exit();
}

$id_user = $_SESSION['id_user'];
include('config.php');
$query = mysqli_query($con, "SELECT * FROM user WHERE status = 1 AND id_user = '$id_user'");
$data = mysqli_fetch_array($query);
$level = $data['game_level'];
$exp = $data['exp'];
$point = $data['point'];
if ($level < 1){
	echo "<script language='javascript'>";
	echo "alert('You cannot access this.');";
	echo "location='math_game.php'";
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
				include 'header.php';
			 ?>
			<div class="main p-3" style="background-color: #e6f3ff;">
				<div class="col-md-8 mm" style="border-radius: 40px;height: auto;float:none;margin:auto;">
					<div class="p-1 bg-dark mb-2 " style="border-top-left-radius: 25px;border-top-right-radius: 25px;">
						<div class="d-flex justify-content-between" style="padding-left: 30px;">
							<div class="p-2" style="color: white;">
								Game
							</div>
							<div class="p-2" style="color: white;">
								<a href="math_game.php" style="color: white;">
								Go Back
								<svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="currentColor" class="bi bi-door-open-fill" viewBox="0 0 16 16">
								<path d="M1.5 15a.5.5 0 0 0 0 1h13a.5.5 0 0 0 0-1H13V2.5A1.5 1.5 0 0 0 11.5 1H11V.5a.5.5 0 0 0-.57-.495l-7 1A.5.5 0 0 0 3 1.5V15zM11 2h.5a.5.5 0 0 1 .5.5V15h-1zm-2.5 8c-.276 0-.5-.448-.5-1s.224-1 .5-1 .5.448.5 1-.224 1-.5 1"/>
								</svg>
								</a>
							</div>
						</div>
					</div>
					<div>
						Level 1
					</div>
					<div class="row justify-content-end" style=" font-size:1.5rem;margin-right: auto; padding-right: 1rem; text-align: right;">
						Your Level: <?php echo $level ?><br>
						Exp: <?php echo $exp ?>
					</div>
					<div class="d-flex justify-content-center" style=" font-size: 40px;">
						<div class="p-2 mt-2" id = 'num1'>
							
						</div>
						<div class="p-2 mt-2" id ='operation'>
							
						</div>
						<div class="p-2 mt-2" id = 'num2'>
							
						</div>
						<div class="p-2 mt-2">
							=
						</div>
						<div class="p-2">
							<div class="form-group " style="padding-top:0px;">
								<input type="text" class="form-control" placeholder="Ans" required  id='user_input' maxlength="10">
							</div>
							<div class="form-group ">
								<button type="submit" id = 'btn' class="form-control btn btn-dark submit px-3 mt-2" style="font-weight: bold;">Check</button>
							</div>
						</div>
					</div>
					<div style="padding: 1rem" id = 'answer'>
						
					</div>
				</div>
			</div>
		</div>
		<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
		integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe"
		crossorigin="anonymous"></script>
		 	<script type="text/javascript">
			  	var level = 1
				var result
				var num = new Array(level+1)
				var op = new Array(level)
				var symbol = new Array(level)

				const txt1 = document.getElementById('num1')
				const sign = document.getElementById('operation')
				const txt2 = document.getElementById('num2')
				const user_input = document.getElementById('user_input')
				const ans = document.getElementById('answer')
				const btn = document.getElementById('btn')
				const btn2 = document.getElementById('btn2')
				const form = document.getElementById('form')

				

				function findnumber(){
				    for(let i=0;i<level+1;i++){
				        let num1 = Math.floor(Math.random() * 9) + 1 
				        num[i] = num1
				    }
				    for(let i=0;i<level;i++){
				        let op1 = Math.floor(Math.random() * 4) 
				        op[i] = op1
				        symbol[i] = checksymbol(op1)
				    }
				    let temp = operator(num[0],num[1],op[0])
				    if(temp < 0 || temp > 100 || temp - Math.floor(temp) != 0){
				        return findnumber()
				    }
				    return temp
				}

				function operator(n1, n2, random) {
				    if (random == 0) {
				      return n1 + n2;
				    }
				    else if (random == 1) {
				      return n1 - n2;
				    }
				    else if (random == 2) {
				      return n1 * n2;
				    }
				    else if (random == 3) {
				      return n1 / n2;
				    }
				}

				function checksymbol(n1){
				    if(n1==0){
				        return "+"
				    }
				    else if(n1==1){
				        return "-"
				    }
				    else if(n1==2){
				        return "*"
				    }
				    else if(n1==3){
				        return "/"
				    }
				}

				result = findnumber()

				function correctness(){
					if (Number(user_input.value) == result){
						location = 'math_game1_next.php'
					} else {
						ans.innerHTML = 'Try again!'
					}
				}

				btn.addEventListener('click', correctness)

				txt1.innerHTML = num[0]
				txt2.innerHTML = num[1]
				sign.innerHTML = symbol[0]
				// console.log(num) // [ 7, 7 ]
				// console.log(op) // [ 2 ]
				// console.log(symbol) // [ '*' ]
				// console.log(result) // 49
			</script>
	</body>
</html>