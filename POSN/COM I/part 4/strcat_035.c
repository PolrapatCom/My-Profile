#include <stdio.h>
main(){
	char a[80] = "these ";
	char b[20] = "strings ";
	char c[20] = "are ";
	char d[20] = "concatenated. ";
	int i,j,k,l,m,num1=0,num2=0,num3=0,num4=0;
	int idx;
	for(i=0;a[i]!='\0';i++){ 
		num1++;
	}
	idx= num1;
	for(i=0;b[i]!='\0';i++){ 
		num2++;
	}
	for(i=0;c[i]!='\0';i++){ 
		num3++;
	}
	for(i=0;d[i]!='\0';i++){ 
		num4++;
	}
	for(i=0;i<num2;i++){
		a[idx++]=b[i];
	}
	for(i=0;i<=num3;i++){
		a[i+num1+num2]=c[i];
	}
	for(i=0;i<=num4;i++){
		a[i+num1+num2+num3]=d[i];
	}
	printf("%s",a);
}
