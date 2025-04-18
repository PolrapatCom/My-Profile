#include <stdio.h>
main(){
	int i,a,b,c,idx=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=0;a+b+c!=3;i++){
		int max = a;
		if(b>max) max=b; if(c>max) max=c;
		if(max%2==0){
			if(max==a) {
			a/=2; idx++;	}
			if(max==b) {
			b/=2; idx++;	}
			if(max==c) {
			c/=2; idx++;	}
		}
		if(max%2==1){
			if(max==a) a-=1;
			if(max==b) b-=1;
			if(max==c) c-=1;
		}
	}
	printf("%d",idx);	}
