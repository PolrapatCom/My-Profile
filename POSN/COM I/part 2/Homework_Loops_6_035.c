#include <stdio.h>
//upgrade
main(){
	int week,month,x,y,a,b,c;
	scanf("%d",&week); //week is first day in first week
	scanf("%d",&month); //month is amount of day in month
	printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	for(x=1;x<week;x++)
	printf("\t");
	for(y=1;y<=month;y++){
		if((y+x-1)%7==0)
		printf("%d\n",y);
		else
		printf("%d\t",y);
	}
	
	if(x>=0){
		printf("\n");
		printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
		for(y=1;y<=month;y++){
			if((y+a-1)%7==0)
			printf("%d\n",y);
			else
			printf("%d\t",y);
		}}
	else{
		printf("\n");
		printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
		for(a=1;a<x+2;a++)
		printf("\t");
		for(y=1;y<=month;y++){
			if((y+a-1)%7==0)
			printf("%d\n",y);
			else
			printf("%d\t",y);
	}}
	
	printf("\n");
	printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	for(b=1;b<a+2;b++)
	printf("\t");
	for(y=1;y<=month;y++){
		if((y+b-1)%7==0)
		printf("%d\n",y);
		else
		printf("%d\t",y);
	}
	
	printf("\n");
	printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	for(c=1;c<b+2;c++)
	printf("\t");
	for(y=1;y<=month;y++){
		if((y+c-1)%7==0)
		printf("%d\n",y);
		else
		printf("%d\t",y);
	}
	printf("\n");
}

