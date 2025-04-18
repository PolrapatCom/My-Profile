#include <stdio.h>

int Pow(int x,int y,int base){
//	printf("%d \n" , x);
	int j,sum=0;
	for(j=1;j<=y;j++){
		x = x*base;
	}
	sum+=x;
//	printf("sum  = %d\n" , sum);
	return sum;
}

void bn(int x,int base){
	int j,count_bn=0;
	int bn[641]={0};
	for(j=0;x>0;j++){
		if(x>0){
			bn[j]=x%base;
			x = x/base;
			count_bn++;
		}
	}
	for(j=count_bn-1;j>=0;j--){
		if(bn[j]>=0&&bn[j]<=9)
		printf("%c",bn[j]+'0');
		else
		printf("%c",bn[j]+'A'-10);
	}
}
	
int base,i,count1 = 0,count2 = 0,sum1=0,sum2=0,sum_all=0,count_bn;
char num1[641],num2[641];

main(){
	scanf("%d %s %s",&base,num1,num2);
	for(i=0;num1[i]!=0;i++){
		count1++;
	}
	for(i=0;num2[i]!=0;i++){
		count2++;
	}
	for(i=0;i<count1;i++){
		int val;	
		if(num1[i]>='0' && num1[i]<='9') val = num1[i] - '0';
		else val = num1[i] - 'A' + 10;	
		sum1+=Pow(val,count1-1-i,base);
//		printf("%d\n", sum1);	
	}
	for(i=0;i<count2;i++){
		int val;
		if(num2[i]>='0' && num2[i]<='9') val = num2[i] - '0';
		else val = num2[i] - 'A' + 10;
		sum2+=Pow(val,count2-1-i,base);
//		printf("%d\n", sum2);	
	}
	sum_all=sum1+sum2;
	printf("%d\n",sum_all);
	bn(sum_all,base);
}
