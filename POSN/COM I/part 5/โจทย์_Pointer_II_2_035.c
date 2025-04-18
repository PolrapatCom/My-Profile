#include <stdio.h>

char cha[200];
int i;
main(){
	scanf("%s",cha);
	for(i=0;cha[i]!='\0';i++){
		if(cha[i]>='a'&&cha[i]<='z')
		cha[i] -= 32;
	}
	printf("%s");
}

