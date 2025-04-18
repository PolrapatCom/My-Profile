#include <stdio.h>

main(){
	int week,month,x,y;
	scanf("%d",&week);
	scanf("%d",&month);
	printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	for(x=1;x<week;x++)
	printf("\t");
	for(y=1;y<=month;y++){
		if((y+x-1)%7==0)
		printf("%d\n",y);
		else
		printf("%d\t",y);
	}
}

