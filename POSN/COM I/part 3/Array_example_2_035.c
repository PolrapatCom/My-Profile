#include <stdio.h>
//werewolf is similar to free_fire
int i,j,x,y,array[100];
main(){
	for(i=0;i<=9;i++)
	{
		printf("input %d : ",i);
		scanf("%d",&array[i]);
	}
	printf("Element");
	printf("   value");
	printf("   Histogram");
	for(j=0;j<=9;j++)
	{
		printf("\n    %d",j);
		if(array[j]<10){
			printf("       %d        ",array[j]);
			for(i=0;i<array[j];i++)
			{
				printf("*");
			}
		}
		else if(array[j]>=10){
			printf("      %d        ",array[j]);
			for(i=0;i<array[j];i++)
			{
				printf("*");
			}
		}	
	}
}
//1 2 3 4 5 6 7 8 9 10
