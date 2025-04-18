#include <stdio.h>

main(){
	int a,b,c,i,max=0,min=0,mid=0;
	char cha[20];
	scanf("%d %d %d %s",&a,&b,&c,&cha);
	max = a; if(b>max) max = b; 
	if(c>max) max = c;
	min = a; if(b<min) min = b; 
	if(c<min) min = c;
	if(max==a&&min==b) mid=c;
	if(max==b&&min==a) mid=c;
	if(max==a&&min==c) mid=b;
	if(max==c&&min==a) mid=b;
	if(max==b&&min==c) mid=a;
	if(max==c&&min==b) mid=a;
	for(i=0;i<=2;i++){
		if(cha[i]=='A') printf("%d ",min);
		else if(cha[i]=='B') printf("%d ",mid);
		else if(cha[i]=='C') printf("%d ",max);
	}	
}
