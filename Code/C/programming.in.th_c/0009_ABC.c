#include <stdio.h>

main(){
	int a,b,c,i,max=0,min=0,mid=0;
	char cha[20];
	scanf("%d %d %d %s",&a,&b,&c,&cha);
	max = a; if(b>max) max = b; 
	else if(c>max) max = c;
	min = a; if(b<min) min = b; 
	else if(c>min) max = c;
	if(a<=max&&a>=min) mid = a;
	else if(b<=max&&b>=min) mid = b;
	else mid = c;
	for(i=0;i<=2;i++){
		if(cha[i]=='A') printf("%d ",min);
		else if(cha[i]=='B') printf("%d ",mid);
		else if(cha[i]=='C') printf("%d ",max);
	}	
}
