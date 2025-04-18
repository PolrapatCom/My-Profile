#include <stdio.h>
#include <math.h>

main(){
	int x1,x2,y1,y2;
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
	printf("%.2f",sqrt(pow((x1-x2),2)+pow((y1-y2),2)));
}
