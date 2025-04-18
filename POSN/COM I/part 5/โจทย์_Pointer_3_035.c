#include <stdio.h>

int x,y,max;
main(){
	printf("Test Data :\n\tInput the first number : ");
	scanf("%d",&x);
	printf("\tInput the second number : ");
	scanf("%d",&y);
	printf("\nExpected Output :\n\t");
	if(x>y)
	max = x;
	else
	max = y;
	printf("%d is the maximum number",max);
}

/*Test Data :
	Input the first number : 5
	Input the second number : 6

Expected Output :
	6 is the maximum number*/
