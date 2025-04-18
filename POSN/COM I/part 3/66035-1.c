#include <stdio.h>

main(){
	int i,j,num,x,y,remain,array[100];
	printf("Enter N=");
	scanf("%d",&num);
	if(num>=0 && num<=255)
	{
		for(i=0;num>0;i++)
		{
			array[i] = num % 2;
        	num /= 2;
		}
		for(j = i - 1; j >= 0; j--)
    	{
        printf("%d", array[j]);   
    	}
	}
	else
	printf("Number error");
}
