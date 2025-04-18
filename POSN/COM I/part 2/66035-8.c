#include <stdio.h>

main(){
	int a,b,max,i,p;
	for(i=1;i>0;i++){
		p=1;
		scanf("%d",&b);
		if(b==0)
			break;
		for(i=2;i<b;i++){
			if(b%i==0){
				p=0; 
			}
		}
		if (p==1 && b>=max) {
			max = b;
		}
		
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
	
	printf("%d\n",max);
	}

