#include <stdio.h>

int a,b,gcd;
main(){
	scanf("%d %d",&a,&b);
	int i,max;
	if (a>b) max=a; else max = b;
	for(i=1;i<=max;i++){
		if(a%i==0&&b%i==0) gcd=i;
	}
	printf("%d",gcd);
}
