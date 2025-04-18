#include <stdio.h>

main(){
	int num[20]={0},i,j,max=0,min=0,mid=0,swp=0;
	char cha[20]={0};
	scanf("%d %d %d %s",&num[0],&num[1],&num[2],&cha);
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(num[i]<=num[j])
			swp = num[i];
			num[i] = num[j];
			num[j] = num[i];
		}
	}
	for(i=0;i<=2;i++){
		if(cha[i]=='A') printf("%d ",num[0]);
		else if(cha[i]=='B') printf("%d ",num[1]);
		else if(cha[i]=='C') printf("%d ",num[2]);
	}	
}
