#include <stdio.h>

main(){
	int i,j,k,n,p=0,num[8];//not prime
	char prime[255];
	printf("Enter numbers of prime : ");
	scanf("%d",&n);
	for(i=2;i<=1000000;i++){
		int cnt = 0;
		for(j=2;j<i;j++){
			if(i%j==0) cnt++;
		}
		if(cnt==0){
			printf("%d ",i);
			prime[p]=i;
			p++;	
			if(p==n)break;
		}	
	}
		printf("\n")
		;for(i=0;prime[i]!='\0';i++){
			for(k=0;k<8;k++){
				num[k] = prime[i] % 2;
        		prime[i] /= 2;
		}
		for(j = k - 1; j >= 0; j--)
    	{
        	printf("%d", num[j]);   
    	}
    	printf(" ");
	}
}

