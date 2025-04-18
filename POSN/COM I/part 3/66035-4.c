#include "stdio.h"

int a,b,i,p;	float x,y;
main(){
	for(i=1;i>0;i++){	//	int a,b,max,i,p,x,y;
		p=1;
		scanf("%d",&b);
		if(b==0)
			break;
			x++; //all
		for(i=2;i<b;i++){
			if(b%i==0){
				p=0; //not prime
				y++; //not prime
				break;
			}
		}
		if (b==1){
			y++;//exception
			}	
		}
	float avg = (x-y)/x ;
//	printf("x = %f\ny = %f\n",x,y);
	if(x>y)
	printf("Average : %.2f\n",avg);//prime = all - notprime
	if(x==y)
	printf("Average : None\n");	
	}
	
