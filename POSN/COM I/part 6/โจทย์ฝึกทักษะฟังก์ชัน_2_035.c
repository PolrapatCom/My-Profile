#include <stdio.h>

int poom[600];
int count,i,a,ans[600],result,j;

void binary(int num){
	count= 0;
	for(i=0;num>0;i++){
		if(num>0){
			ans[i]=num%2;
			num/=2;
			count++;
		}else break;
	}
	
	for(i=count-1;i>=0;i--){
		printf("%d",ans[i]);
	}
}

int main(){
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&poom[i]);
	}
	printf("\n");
	for(j=0;j<a;j++){
		binary(poom[j]);
		printf("\n");
	}	
	return 0;
}
