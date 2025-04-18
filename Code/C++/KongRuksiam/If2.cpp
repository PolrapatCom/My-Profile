#include "stdio.h"

main(){
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	if(num1%2 == 0){
		printf("1 : Even number\n");
	}
	else{
		printf("1 : Odd number\n");
	}
	if(num2%2 == 0){
		printf("2 : Even number\n");
	}
	else{
		printf("2 : Odd number\n");
	}
}
