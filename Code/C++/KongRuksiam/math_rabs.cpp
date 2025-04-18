#include "stdio.h"
#include <math.h>

float a;
main(){
	printf("rabs \n");
	printf("Enter your number : ");
	scanf("%f",&a);
	float result = rabs(a);
	printf("Result is %.2f",result);
}

