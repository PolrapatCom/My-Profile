#include <stdio.h>

int i,count=0;
char cha[641],data[641];

main(){
	scanf("%[^\n]s",cha);
	for(i=0;cha[i]!='\0';i++){
		data[i]=cha[i];
	}
	printf("%s",data);
}
