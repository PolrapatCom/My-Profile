#include <stdio.h>
int max;

int findMax(int a,int b){
	if(a > b){
		max = a;
	}
	else{
		max = b;
	}
	return max;
}
main(){
/**/int a,b;
	printf("Enter your number 1 : ");
	scanf("%d",&a);
	printf("Enter your number 2 : ");
	scanf("%d",&b);
/**/int result = findMax(a,b);
	printf("******************\n");
	printf("Maximum is : %d\n",result);
}

