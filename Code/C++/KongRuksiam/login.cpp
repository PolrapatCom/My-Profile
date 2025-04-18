#include "stdio.h"
#include <string.h>

char password[100],username[100];
main(){
	printf("Enter your username : ");
	scanf("%s",&username);
	printf("Enter your password : ");
	scanf("%s",&password);
	if(strcmp(username,"bpk") == 0 && strcmp(password,"55555") == 0){
		printf("***********\nLogin complete");
	}
	else{
		printf("***********\nNot found");
	}
}
