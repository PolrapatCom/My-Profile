#include <stdio.h>

int A[50],sum=0,i,B[50];
main(){	
	for(i =0;i<=9;i++){
		scanf("%d",&A[i]);
	}
	for(i =0;i<=9;i++){
		B[A[i]%42] = 1;
	}
	for(i =0;i<=42;i++){
		if(B[i] == 1)
		sum++;
	}
	printf("%d",sum%42);
}


