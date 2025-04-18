#include <stdio.h>

main(){
	int a,b,max,i,p,x,y;
	for(i=1;i>0;i++){
		p=1;
		scanf("%d",&b);
		if(b==0)
			break;
			x++; //all
		for(i=2;i<b;i++){
			if(b%i==0){
				p=0; //not prime
				y++; //not prime
			}
		}
		if (p==1 && b>=max&&b!=1) {
			max = b;
		}
		if (b==1){
			y++;
		}
	}
	if(x-y>0)
	printf("Max prime : %d\nCount prime : %d\n",max,x-y);
	if(x-y==0)
	printf("Max prime : %d\nCount prime : None\n",max);
	}
	/*for(i=1;i>0;i++){
		if(b==0)
			break;
		scanf("%d",&a);
		for(i=2;i<a;i++){
			if(a%i!=0){
			if(a > max)
					max = a; 
				}
			else if(a==0)
			break;
		}
		if(a==0)
			break;
	}*/
	
	

