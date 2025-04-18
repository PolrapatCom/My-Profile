#include "stdio.h"

main(){
	int score1,score2;
	scanf("%d%d",&score1,&score2);
	if(score1 >= 50){
		printf("1:Pass!!\n");
	}
	else{
		printf("1:Fail!!\n");
	}
	if(score2 >= 50){
		printf("2:Pass!!");
	}
	else{
		printf("2:Fail!!");
	}
}
