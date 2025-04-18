#include <stdio.h>

main(){
	char a[20] = "Hello";
	char b[20] = "Hello";
	char c[20] = "hello";
	int i,p1=0,p2=0;
	for(i=0;a[i]!='\0';i++){ 
		p1 = p1 + a[i]-b[i];
	}
	for(i=0;a[i]!='\0';i++){ 
		p2 = p2 + a[i]-c[i];
	}
	printf("%d %d",p1,p2);
}

