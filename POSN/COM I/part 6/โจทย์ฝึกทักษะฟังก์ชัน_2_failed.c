#include <stdio.h>

struct data{
	int num;
}poom[641];

int i,a;

int binary;

main(){
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&poom[i]);
	}
	printf("\n");
	for(i=0;i<a;i++){
		printf("%d\n",&poom[i]);
	}
}
