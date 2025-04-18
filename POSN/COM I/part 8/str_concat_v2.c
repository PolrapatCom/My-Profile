#include <stdio.h>

int j,i,count[5]={0};
char cha[5][641];

main(){
	for(i=0;i<4;i++){
		scanf("%s",cha[i]);
	}
	for(i=0;i<4;i++){
		printf("%s",cha[i]);
	}
	for(i=0;i<4;i++){
		for(j=0;cha[i][j]!='\0';j++){
			count[i]++;
		}
		if(i>0){
			count[i]+=count[i-1];
		}
	}
	for(i=0;i<4;i++){
		printf("%d\n",count[i]);
	}
	for(i=0;i<4;i++){
		printf("%s",cha[i]);
		printf(" ");
	}
}
