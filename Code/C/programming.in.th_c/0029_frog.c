#include <stdio.h>

main(){
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>y) {
		printf("%d",2); return 0;	
	}
	if(y%x==0){
		printf("%d",y/x);
	}
	else printf("%d",y/x+1);
}
