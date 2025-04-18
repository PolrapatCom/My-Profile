#include <stdio.h>

int num1,num2,count;
main(){
	printf("Enter Number 1 : "); 
	scanf("%d",&num1); //num 1 is first number
	printf("Enter Number 2 : ");
	scanf("%d",&num2); //num 2 is lenght of mul table
	printf("**********\n");
	printf("Multiplication table\n");
	printf("**********\n");	
	for(count = 1;count <= num2;count++){
		printf("%d x %d = %d\n",num1,count,num1 * count);
	}		
}


