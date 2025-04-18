#include <stdio.h>

int i,numA=0,numB=0,idxA=0,idxB=0;
char a[100]={0},b[100]={0},cha;
main(){
	scanf("%s %c %s",a,&cha,b);
	for(i=0;a[i]!='\0';i++) {
		numA++; 
		if(a[i]==1) idxA=i;
	}
	for(i=0;b[i]!='\0';i++) {
		numB++; 
		if(a[i]==1) idxB=i;
	}
	if(cha=='*'){
		printf("1");
		for(i=0;i<numA+numB-2;i++)
		printf("0");
	}
	if(cha=='+'&&numA>=numB){
		printf("1");
		for(i=0;i<numA-1;i++){
			if(i==numB){
				printf("1"); continue;
			}
			printf("0");
		}
	}
	else if(cha=='+'&&numB>=numA){
		printf("1");
		for(i=0;i<numB-1;i++){
			if(i==numA){
				printf("1"); continue;
			}
			printf("0");
		}
	}
}
