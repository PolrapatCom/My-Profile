#include <stdio.h>

main(){
	int i,p=0;
	char cha[500];
	scanf("%[^\n]s",cha);
	for(i=0;cha[i]!='\0';i++){
		if(p==1) {
			p=0; continue;}
		if(cha[i+2]=='p'){
			p=1; continue;
		}
		printf("%c",cha[i]);
	}
}
