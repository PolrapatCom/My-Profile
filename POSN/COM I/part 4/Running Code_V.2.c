#include <stdio.h>

int x,y,num,i,j;
char cha,cha2;
main(){
	scanf("%d%d%s",&x,&y,&cha);
	int result = y-x;
	for(i=9;i>=0;i--){
		printf("%d",y-(i*result));
		cha2 = cha+9-i;
		if(cha2>'Z')
		cha2 -= 26;
		printf("%c ",cha2);
	}
}

