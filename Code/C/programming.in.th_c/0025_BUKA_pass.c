#include <stdio.h>

int i,numA=0,numB=0,idxA=0,idxB=0;
char a[101]={0},b[101]={0},cha;
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
	if(numA==numB&&cha=='+'){
		printf("2");
		for(i=0;i<numA-1;i++){
			printf("0");
		}
	}
	else if(cha=='+'&&numA>=numB){
		printf("1");
		for(i=0;i<numA-1;i++){
			if(i==numA-numB-1){
				printf("1"); continue;
			}
			printf("0");
		}
	}
	else if(cha=='+'&&numB>=numA){
		printf("1");
		for(i=0;i<numB-1;i++){
			if(i==numB-numA-1){
				printf("1"); continue;
			}
			printf("0");
		}
	}
}
