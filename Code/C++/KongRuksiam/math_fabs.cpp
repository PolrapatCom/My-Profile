#include "stdio.h"
#include <math.h>

float a;
main(){
	printf("fabs \n");
	printf("Enter your number : ");
	scanf("%f",&a);
	float result = fabs(a);
	printf("Result is %.2f",result);
}

