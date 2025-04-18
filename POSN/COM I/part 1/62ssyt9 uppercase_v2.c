#include <stdio.h>

char a;
main(){
	scanf("%c",&a);
	if(a>64 && a<91)
	printf("%c",a);
	else if(a>96 && a<123)
	printf("%c",a-32);
	else{
	printf("error");
}}

