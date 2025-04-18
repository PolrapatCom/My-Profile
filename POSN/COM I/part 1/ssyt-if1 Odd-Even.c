#include <stdio.h>

main(){
	int a,b,c,d,e,x=0,y=0;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a%2==0){
	x++;}
	else
	y++;
	if(b%2==0){
	x++;}
	else
	y++;
	if(c%2==0){
	x++;}
	else
	y++;
	if(d%2==0){
	x++;}
	else
	y++;
	if(e%2==0){
	x++;}
	else
	y++;
	printf("%d %d",x,y);
}
