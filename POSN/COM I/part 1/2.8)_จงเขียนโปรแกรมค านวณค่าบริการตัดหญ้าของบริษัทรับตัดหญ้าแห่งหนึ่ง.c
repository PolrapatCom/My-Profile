#include <stdio.h>

float x,sum;
main(){
	printf("Please input area : ");
	scanf("%f",&x);
	if(x > 400)
	sum = x*5;
	else if(x > 200 && x <= 400)
	sum = x*7.5;
	else if(x >= 80 && x <= 200)
	sum = x*10;
	else if(x < 80)
	sum = x*12.5;
	printf("Total service costs : %.2f baht",sum);
}

//Please input area : 100
//Total service costs : 1000 baht
