#include <stdio.h>

int x,y,z;

void survival_bag(int x,int y,int z){
	int min;int a=x/3;int b=y/4;int c=z/2;
	if(a<b) min=a; else min=b;
	if(c<min) min=c;
	printf("%d %d %d %d",min,x-min*3,y-min*4,z-min*2);
}
main(){	
	scanf("%d %d %d",&x,&y,&z);
	survival_bag(x,y,z);
}

