#include <stdio.h>

int a,i,j,sum=0,mini_sum=0;
main(){
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
			sum+=j;
		}
		printf("\n");
	}
	if(a>3){
		for(i=1;i<=a;i++){
			mini_sum+=i;
		}
		sum-=2*mini_sum-2;
	}
	else sum=0;
	printf("%d",sum);
}

