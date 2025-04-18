#include <stdio.h>

int a,b,x,y,i,num[11]={0},total=0,money=0;
main(){
	scanf("%d %d",&a,&b);
	if(a<=0||a>=100){
		printf("number error"); return 0; 
	}
	if(b<=0||b>=100){
		printf("number error"); return 0; 
	}
	for(i=a;i<=b;i++){
		num[i%10]++;
		if(i>=10) num[i/10]++;
	}
	for(i=0;i<=9;i++){
		if(i==0) {
			printf("%d=%d=%d\n",i,num[i],num[i]*15);
			total+=num[i]; money+=num[i]*15;
		}
		if(i>=1&&i<=5) {
			printf("%d=%d=%d\n",i,num[i],num[i]*20);
			total+=num[i]; money+=num[i]*20;
		}
		if(i>=6&&i<=8) {
			printf("%d=%d=%d\n",i,num[i],num[i]*25);
			total+=num[i]; money+=num[i]*25;
		}
		if(i==9) {
			printf("%d=%d=%d\n",i,num[i],num[i]*50);
			total+=num[i]; money+=num[i]*50;
		}
	}
	printf("Total=%d\nMoney=%d",total,money);	
}
