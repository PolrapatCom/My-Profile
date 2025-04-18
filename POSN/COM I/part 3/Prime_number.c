#include <stdio.h>

int num,a,i,j,p;
main(){
	int array[100];
	scanf("%d",&num);
	for(i=2;i<num;i++){
			for(j=2;j<i;j++){
			p=0;
			if(i%j==0)
			{
				p++;//not prime
			}	
		}
		if(p==0)//prime
		{
			array[i]=j;
		}
		printf("%d ",array[i]);	
	}
}

