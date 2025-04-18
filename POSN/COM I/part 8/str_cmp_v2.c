#include <stdio.h>

int i,count=0;
char cha[641],data[641];

main(){
	scanf("%s %s",cha,data);
	int p=0; //equal
	for(i=0;cha[i]!='\0';i++){
		if(cha[i]!=data[i]){
			p=1;
		}
	}
	if(p==0) printf("Yes");
	if(p==1) printf("No");
}
