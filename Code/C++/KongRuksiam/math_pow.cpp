#include "stdio.h"
#include <math.h>

float a,b;
main(){
	printf("Power \n");
	printf("Enter base of your number : ");
	scanf("%f",&a);
	printf("Enter exponent of your number : ");
	scanf("%f",&b);
	float result = pow(a,b);
	printf("Result is %.2f",result);
}

