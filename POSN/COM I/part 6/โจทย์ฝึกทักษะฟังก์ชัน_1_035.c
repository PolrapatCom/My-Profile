#include <stdio.h>

int a,i,j,k;

main(){
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=i;j<=a-1;j++){
			printf(" ");
		}
		for(j=2*i-1;j>=1;j--){
			printf("*");
		}
		for(j=2*i;j<=2*a-1;j++){
			printf(" ");
		}
		for(j=2*i-1;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
}
