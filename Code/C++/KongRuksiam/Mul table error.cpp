#include <stdio.h>

int num,lenght,table,coun,count;
main(){
	printf("Enter Number : "); 
	scanf("%d",&num); //num is first number
	printf("Enter lenght : ");
	scanf("%d",&lenght); //lenght is lenght of mul table
	printf("Enter Amount : ");
	scanf("%d",&table); //table is amount of mul table
	printf("**********\n");
	for(coun = 1;coun <= table;coun++){
	printf("Multiplication table of %d\n",table);
	printf("**********\n");	
		for(count = 1;count <= lenght;count++){
			printf("%d x %d = %d\n",num,count,num * count);
		}
	}
}

