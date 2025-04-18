#include <stdio.h>

int num[10] = {10,2,7,4,5,6,3,8,9,1},i,j,swp;
int min;
main(){
	if(num[0] <= num[1])
		min = num[0];
	else min = num[1];	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(num[i]<num[j]){
				swp = num[j];//buffer
				num[j]=num[i];
				num[i]=swp;
			}
		}
	}
	
	for(i=0;i<10;i++)
	printf("%d ",num[i]);
	
}
