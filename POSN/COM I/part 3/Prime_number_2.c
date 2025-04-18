#include <stdio.h>

int num,a,i,j,p=0,even=0,odd=0,sum=0;
main(){
	int array[100];
	scanf("%d",&num);
	for(i=2;i<=num;i++){
		p=1;
		for(j=2;j<i;j++){
			if(i%j==0)
			{
				p = 0;//not prime
			}}	
			if(i==2)//prime
			{
			p=1;
			even++;
			}
			if(p==1)
			{
				printf("%d ",i);
				p++;
				sum+=i;
				if(i!=2){
					odd++;
				}
			}
		
	}
	printf("\n%d\n",sum);
	printf("%d\n",odd+even);
	printf("%d\n",even);
	printf("%d",odd);
	
}

