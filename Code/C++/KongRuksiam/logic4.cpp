#include "stdio.h"

char gender;
int age;
main(){
	printf("Type your gender : ");
	scanf("%c",&gender);
	printf("Type your age : ");
	scanf("%d",&age);
	if(!gender == ('M','m') && age >= 20){
		printf("Pass!!!");
		}else {
		printf("Fail!!!");}
	  
}
