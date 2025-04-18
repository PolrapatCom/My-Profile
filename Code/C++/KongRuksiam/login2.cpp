#include "stdio.h"
#include <string.h>

char password[100],username[100];
int num;
main(){
	printf("Enter your username : ");
	scanf("%s",&username);
	printf("Enter your password : ");
	scanf("%s",&password);
	if(strcmp(username,"bpk") == 0 && strcmp(password,"55555") == 0){
		printf("***********\nLogin complete");
		printf("\n***********\nlet's\tType your number 1-3\n1 is for creating account\n2 is for deposit\n3 is for withdraw\n***********\n");
		scanf("%d",&num);
		if(num == 1){
			printf("***********\ncreating account");
		}
		else if(num == 2){
			printf("***********\ndeposit");
		}
		else if(num == 3){
			printf("***********\nwithdraw");
		}
		else{
			printf("Error");
		}
	}
	else{
		printf("***********\nNot found");
	}}
