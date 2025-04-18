#include <stdio.h>

main(){
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	int ma[a][b],trix[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&ma[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&trix[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d ",ma[i][j]+trix[i][j]);
		}
		if(a-1==i) break;
		if(j==b) printf("\n");
	}}
