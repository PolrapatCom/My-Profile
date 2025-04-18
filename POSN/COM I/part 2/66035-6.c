#include <stdio.h>
//upgrade %2d
main(){
	int week,month,x,y,a,b,c,A,B,C;
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
	
//////////////////////////////////	
		printf("\n");
	for(a=1;a<x+2;a++){
		for(A=1;A<x+2;A++){
		if(A==7){
			printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
			break;
			}
		}
		if(A==7)
		break;
		else printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
		break;
	}
	for(a=1;a<x+2;a++){
		if(a==7)
	printf("\n");
		else
	printf("\t");
	}
	for(y=1;y<=month;y++){
		if((y+a-1)%7==0)
		printf("%d\n",y);
		else
		printf("%d\t",y);
	}
	
//////////////////////////////////	
printf("\n");
	for(b=1;b<a+2;b++){
		for(B=1;B<a+2;B++){
		if(B==7){
			printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
			break;
			}
		}
		if(B==7)
		break;
		else printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
		break;
	}
	for(b=1;b<a+2;b++){
		if(b==7)
	printf("\n");
		else
	printf("\t");
	}
	for(y=1;y<=month;y++){
		if((y+b-1)%7==0)
		printf("%d\n",y);
		else
		printf("%d\t",y);
	}
	
//////////////////////////////////	
	printf("\n");
	for(c=1;c<b+2;c++){
		for(C=1;C<b+2;C++){
		if(C==7){
			printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
			break;
			}
		}
		if(C==7)break;
		else printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
		break;
	}
	for(c=1;c<b+2;c++){
		if(c==7)
	printf("\n");
		else
	printf("\t");
	}
	for(y=1;y<=month;y++){
		if((y+c-1)%7==0)
		printf("%d\n",y);
		else
		printf("%d\t",y);
	}
}

