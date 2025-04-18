#include "stdio.h"
char grade;
int score;
main(){
	scanf("%d",&score);
	if (score == 100){
		printf("Grade = SSS");}
	else if (score >=80 && score < 100){
		printf("Grade = A");}
	else if (score >=70 && score < 80){
		printf("Grade = B");}
	else if (score >=60 && score < 70){
		printf("Grade = C");}
	else if (score >=0 && score < 60){
		printf("Grade = F");}
	else{
		printf("Error");}
}

