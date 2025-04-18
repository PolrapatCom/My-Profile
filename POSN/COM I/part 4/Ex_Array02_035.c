#include <stdio.h>

main(){
	int i,j,k,n,p=0;//not prime
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
			p++;
			
			if(p==n)break;
		}	
	}
}

