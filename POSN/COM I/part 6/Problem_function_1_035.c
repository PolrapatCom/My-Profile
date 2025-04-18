#include <stdio.h>

int k,n;

void cut(int shirt[]) {
	int sum = 0, i;
	for(i=0; i<n; i++) {
		sum += shirt[i];
		printf("%d\n", ((sum-1)/(k*100))+1);
	}
}

main(){
	scanf("%d %d",&k,&n);
	int shirt[n], i;
	for(i=0; i<n; i++) scanf("%d", &shirt[i]);
	cut(shirt);
}
