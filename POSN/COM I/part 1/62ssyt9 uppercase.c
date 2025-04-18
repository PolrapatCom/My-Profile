#include <stdio.h>
#include <string.h>

char a;
main(){
	scanf("%c",&a);
	if((a<'A')||((a>'Z')&&(a<'a'))||(a>'z'))
	printf("error");
	else{
	printf("%c",toupper(a));
}}
