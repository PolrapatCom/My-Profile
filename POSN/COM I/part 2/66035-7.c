#include <stdio.h>

int count,i,j,x,y;
main(){
	for(i=1;i>0;i++){
		printf("Enter number : ");
		scanf("%d",&x);
		if(x==0){
			break;
		}
		else if(x%5==0){
			count++;
		}
	}
	if(count!=0)
	printf("Count Div 5 : %d",count);
	else
	printf("None");
}

