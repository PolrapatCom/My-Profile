#include <stdio.h>

float w,h;
float bmi;
main(){
	scanf("%f %f",&w,&h);
	bmi = w/(h*h)*10000;
	printf("%.2f\n",bmi);
	if(bmi >= 23){
	printf("Fat");}
	else if(bmi >= 18.5){
	printf("Normal");}
	else if(bmi < 18.5){
	printf("Thin");}
}

