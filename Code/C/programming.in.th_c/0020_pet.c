#include <stdio.h>
main(){
	int i,j,num[10][10]={0},sum[10]={0},max=0,idx=0;
	for(i=0;i<=4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&num[i][j]);
			}
		}
	for(i=0;i<=4;i++){
		for(j=0;j<4;j++){
			sum[i]+=num[i][j];
		}
			}
	max = sum[0];		
	for(i=0;i<=4;i++){
			if(sum[i]>=max){
				max = sum[i];
				idx = i+1;	
		}
	}
	printf("%d %d",idx,sum[idx-1]);	}

