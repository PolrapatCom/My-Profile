#include <stdio.h>

char cha1[100],cha2[200];
int i,j,p=0,num1=0,num2=0,count1[200]={0},count2[200]={0};
main(){
	scanf("%s%s",cha1,cha2);
	for(i=0;cha1[i]!='\0';i++){
		num1++;//strlen1
	}
	for(i=0;cha2[i]!='\0';i++){
		num2++;//strlen2
	}
	for(i=0;i<num1;i++){
		count1[(int)(cha1[i])]++;
	}
	for(i=0;i<num2;i++){
		count2[(int)(cha2[i])]++;
	}
	p=0;
	for(i=0;i<=200;i++){
		if(count1[i]!=count2[i])
		p=1;
	}
	if(p==0)
	printf("Yes");
	if(p==1)
	printf("No");
}

