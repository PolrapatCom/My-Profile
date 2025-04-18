#include <stdio.h>

main(){
	char a[20] = "Hello World!";
	char b[20];
	int i,j,k,l,m,num;
	//if(a[i]!='\0') num++;
	for(i=0;a[i]!='\0';i++){ //strcpy
		b[i]=a[i];
	}
	printf("a = %s\nb = %s",a,b);
}

