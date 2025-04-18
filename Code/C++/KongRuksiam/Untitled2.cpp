#include "stdio.h"

char name[50],gender;
int age;
float gpa;

main(){
	printf("Enter your name : ");
	scanf("%s",&name);
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your gender : ");
	scanf(" %c",&gender);
	printf("Enter your gpa : ");
	scanf("%f",&gpa);
	
	printf("\n **************************** \n");
	printf("Name = %s\n",name);
	printf("Age = %d\n",age);
	printf("Gender = %c\n",gender);
	printf("Gpa = %.2f\n",gpa);
	
}

