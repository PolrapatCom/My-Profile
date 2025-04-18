#include "stdio.h"
#include <math.h>

float a;
main(){
	printf("floor \n");
	printf("Enter your number : ");
	scanf("%f",&a);
	float result = floor(a);
	printf("Result is %.2f",result);
}

