#include <stdio.h>

main(){
	
	int i,score[10],sum=0;
	int p,f;
	for(i=0;i<10;i++)
	{
		scanf("%d",&score[i]);
	}
	printf("\n");
	for(i=9;i>=0;i--)
	{
		printf("%d\n",score[i]);	
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		sum+=score[i];
	}
	printf("%d\n",sum);
	float Sum=sum;
	float avg = Sum/10;
	printf("%.2f\n",avg);
	for(i=0;i<10;i++)
	{
		if (score[i] >= 50)
		p++;
		else
		f++;
	}
	printf("\n");
	printf("Pass = %d\n",p);
	printf("Fail = %d\n",f);
}

