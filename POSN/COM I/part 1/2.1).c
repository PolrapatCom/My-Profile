#include <stdio.h>

main(){
	float a,b,c,d;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	if((a<0||a>100)||(b<0||b>100)||(c<0||c>100)||(d<0||d>100)){
		printf("Invalid input!!");
		return 0;
	}
	else{
		printf("%.2f",(a+b+c+d)/4);
	}
}
