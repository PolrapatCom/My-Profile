#include <stdio.h>

int a[] = {0,1,2,4,0},b[] = {0,0,7,9,5},c[5]={0},i,sum;
main(){
	for(i=0;i<5;i++){
		c[i]=a[i]+b[i];
	}
	sum = 10000*c[0]+1000*c[1]+100*c[2]+10*c[3]+1*c[4];
	printf("%d",sum);
}

