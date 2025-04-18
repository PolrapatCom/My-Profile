#include <stdio.h>

char num[641];
int i,odd;
main(){
	scanf("%s",num);
	for(i=0;num[i]!='\0';i++){
		if((num[i]-'0')%2==1)
			odd++;
	}
	printf("%d",odd);
}

