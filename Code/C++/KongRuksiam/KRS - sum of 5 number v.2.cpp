#include "stdio.h"

main(){
	int number,total = 0;
	for(number = 1;number <= 5;number++){
	printf("Enter your number %d : ",number);
	scanf("%d",&number);
	total+=number;
	}
}
