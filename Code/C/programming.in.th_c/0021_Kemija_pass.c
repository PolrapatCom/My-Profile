#include <stdio.h>

main(){
	int i,p=0;
	char cha[500];
	scanf("%[^\n]s",cha);
	for(i=0;cha[i]!='\0';i++){
		if(cha[i]=='a'||cha[i]=='e'||cha[i]=='i'||cha[i]=='o'||cha[i]=='u') i+=2;
		printf("%c",cha[i]);
	}
}
