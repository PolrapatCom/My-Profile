#include <stdio.h>

int sum=0,length=0,max,k,j,i,b,a,num[641]={0};
main(){
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&num[i]);	
	}
	max = num[0];
	for(i=0;i<a;i++){
		sum+=num[i];
		if(num[i]>max){
			max = num[i];
		}
	}
	length = 2*sum;
	char mnt[1001][1001]={0};
	for(k=0;k<a;k++){
		for(i=max;;)
	}
}
