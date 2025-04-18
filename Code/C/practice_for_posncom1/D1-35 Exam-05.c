#include <stdio.h>

int x,y;
main(){
	printf("Enter A.D. : ");
	scanf("%d",&x);
	int result = x + 543;
	printf("B.E. is %d\n",result);
	int num1 = x%10;
	int num2 = (x/10)%10;
	int num3 = (x/100)%10;
	int num4 = (x/1000)%10;
	int num5 = (x/10000)%10;
	int sum1 = num1 + num2 +num3 +num4;
	int n1 = result%10;
	int n2 = (result/10)%10;
	int n3 = (result/100)%10;
	int n4 = (result/1000)%10;
	int n5 = (result/10000)%10;
	int sum2 = n1 + n2 +n3 +n4;
	printf("Sum of A.D. is %d\n",sum1);
	printf("Sum of B.E. is %d\n",sum2);
	printf("Total is %d %d %d %d \n",num4+n4,num3+n3,num2+n2,num1+n1);
} 

