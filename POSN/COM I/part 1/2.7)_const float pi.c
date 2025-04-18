#include <stdio.h>

const float pi = 3.141592;
float r;
int num;
main(){
	printf("Please input radius : ");
	scanf("%f",&r);
	printf("Calculator Menu :\n\t1. Find area\n\t2. Find circumference\n");
	printf("Choose menu : ");
	scanf("%d",&num);
	if(num == 1){
		printf("Area = %.2f",pi*r*r);
	}
	else if(num == 2){
		printf("Circumference = %.2f",pi*r*2);
	}
}
/*Please input radius : 3
Calculator Menu :
1. Find area
2. Find circumference

Choose menu : 1
Area = 28.26*/
