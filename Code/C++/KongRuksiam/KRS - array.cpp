#include <stdio.h>

main(){
	int count;
	int number[count];
	float avg,sum;
	printf("Enter your amount of your number : ");
	scanf("%d",&count);

	for(int i = 0;i<count;i++){
		printf("Enter number %d : ",i+1);
		scanf("%d",&number[i]);
	}
	
	for(int j = 0;j<count;j++){
		sum+=number[j];
	}
	
	avg = sum/count;
	printf("**************************\n");
	printf("Total = %.0f\n",sum);
	printf("Avg = %.100f\n",avg);	
}
