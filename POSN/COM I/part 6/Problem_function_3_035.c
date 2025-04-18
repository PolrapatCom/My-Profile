#include <stdio.h>

int i,j,n,a = 1,k,b;

void solve(int num){
		b = num/2;
	for(i=1;i<=num;i++){
		if(i<=num/2){
			for(j=0;j<b;j++){
			printf(" ");
			}
			for(k = 1; k<=a; k++) printf("*");
			printf("\n");
			a+=2;
			b--;
		 	continue;
		}
		for(j=0;j<b;j++){
			printf(" ");
			} 
		for(j=0;j<a;j++){
			printf("*");
		}
		a-=2;
		b++;
		printf("\n");
	}
}

main(){
	int num;
	scanf("%d",&num);
	solve(num);
//	b = num/2;
//	for(i=1;i<=num;i++){
//		if(i<=num/2){
//			for(j=0;j<b;j++){
//			printf(" ");
//			}
//			for(k = 1; k<=a; k++) printf("*");
//			printf("\n");
//			a+=2;
//			b--;
//		 	continue;
//		}
//		for(j=0;j<b;j++){
//			printf(" ");
//			} 
//		for(j=0;j<a;j++){
//			printf("*");
//		}
//		a-=2;
//		b++;
//		printf("\n");
//	}
}
