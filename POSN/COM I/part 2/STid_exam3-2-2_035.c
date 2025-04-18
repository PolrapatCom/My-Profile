#include <stdio.h>

main(){
	float score,sum,i=0;
	do{
		printf("Enter score : ");
		scanf("%f",&score);		
		sum+=score;
		i++;
	}
	while(score!=-99);
	printf("Average = %.3f",((sum+99)/(i-1)));
}

