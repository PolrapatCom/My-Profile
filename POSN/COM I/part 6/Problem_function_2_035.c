#include <stdio.h>

int water,sugar,i;

void green_tea(int x,int y){
	int a = y/15;
	int b = x/250;
	int min;
	if(a>b)		min = b;
	else 	min = a;
	printf("%d",min);
	if(x%250!=0){
		printf(" water");
	}
	printf("\n");
}
main(){
	for(i=1;i<=7;i++){
		scanf("%d %d",&water,&sugar);
	green_tea(water,sugar);
	}
}
/*500 30
500 31
501 30
501 32
1000 500
2000 1
0 50*/

