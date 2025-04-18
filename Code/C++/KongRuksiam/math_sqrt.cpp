#include "stdio.h"
#include <math.h>

float a;
main(){
	printf("sqrt \n");
	printf("Enter your number : ");
	scanf("%f",&a);
	float result = sqrt(a);
	printf("Result is %.2f",result);
}

