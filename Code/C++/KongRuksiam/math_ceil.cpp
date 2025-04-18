#include "stdio.h"
#include <math.h>

float a;
main(){
	printf("ceil \n");
	printf("Enter your number : ");
	scanf("%f",&a);
	float result = ceil(a);
	printf("Result is %.2f",result);
}

