#include <stdio.h>

int a,b,i,num[641]={0};
main(){
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&num[i]);
	}
	scanf("%d",&b);
	if(b>0){
		for(i=0;i<a;i++){
			printf("%d ",num[i]+b);
		}	
	}
	else{
		for(i=a-1;i>=0;i--){
			printf("%d ",num[i]+b);
		}
	}
}
