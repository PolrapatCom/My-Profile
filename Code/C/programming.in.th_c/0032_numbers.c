#include <stdio.h>

main(){
	int a,i,j,swp=0;
	scanf("%d",&a);
	int num[a];
	for(i=0;i<a;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(num[i]<num[j]){
				swp = num[i];
				num[i] = num[j];
				num[j] = swp;
			}
		}
	}
	for(i=1;num[0]==0;i++){
		swp = num[0];
		num[0] = num[i];
		num[i] = swp;
	}
	for(i=0;i<a;i++){
		printf("%d",num[i]);
	}
}
