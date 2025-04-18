#include <stdio.h>

int power(int base,int expo){
	int number = 1;
	for(int i = 1;i <= expo;i++){
		number *= base;
	}
	return number;
}
main(){
/**/int a,b;
	printf("Enter base of your number : ");
	scanf("%d",&a);
	printf("Enter exponent of your number : ");
	scanf("%d",&b);
	printf("********************************\n");
/**/int result = power(a,b);
	printf("The result of %d ^ %d = %d",a,b,result);
}
