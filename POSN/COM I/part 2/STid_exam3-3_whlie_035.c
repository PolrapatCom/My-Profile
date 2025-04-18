#include <stdio.h>

main(){
	int sum=0,num,i,j;
		printf("Enter a positibe number : ");
		scanf("%d",&num);
		i=1;
		while(i<=num){
			sum+=i;
			i++;
		}
		printf("Summation from 1 to %d : %d",num,sum);		
}

