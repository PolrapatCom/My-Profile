#include <stdio.h>

int x,y,i;
char cha;
main(){
	scanf("%d %d %c",&x,&y,&cha);
	int result = y-x;
	int a = 0;
	for(i=9;i>=0;i--)
	{
		if(cha+a>'Z')
		{
			cha-=26;
		}
		printf("%d%c ",y-(i*result),cha+a);
		a++;
	}
}
