#include "stdio.h"

int id,number;
main(){
	scanf("%d",&id);
	printf("ID : %d\n",id);
	printf("Type your number 1-3\n1 is for creating account\n2 is for deposit\n3 is for withdraw\n");
	printf("**************\n");
	scanf("%d",&number);
	printf("**************\n");
	switch(number){
		case 1 :
			printf("creating account");
			break;
		case 2 :
			printf("deposit");
			break;
		case 3 : 
			printf("withdraw");
			break;
		default : 
			printf("Invalid");
	} }
