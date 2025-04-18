#include <stdio.h>

main(){
	float score,sum,i;
	for(i=1;i>0;i++){
		printf("Enter score : ");
		scanf("%f",&score);
		if(score==-99)
		break;
		sum+=score;
	}
	printf("Average = %f",sum/i);
}

