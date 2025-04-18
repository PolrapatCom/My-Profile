#include <stdio.h>

int j,i,num[101][101]={0},x,y,a,b,c;
main(){
	scanf("%d %d %d",&a,&b,&c);
	for(i=0;i<c;i++){
		scanf("%d %d",&x,&y);
		num[x-1][y-1]=i+1;
	}
	for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				printf("%d ",num[i][j]);
		}
		printf("\n");
	}
}
/*
5 8
3
1 2
5 7
1 6

10 8
9
5 7
5 8
10 1
1 2
6 4
4 6
9 3
2 8
5 6
*/
