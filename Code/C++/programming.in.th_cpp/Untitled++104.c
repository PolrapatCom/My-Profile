#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	char x[500];
	scanf("%s",x);
	int i,j,y=strlen(x),a[100],b=0,sum=0;
	for(i=0;i<y;i++){
		if(x[i]>='0'&&x[i]<='9'){
			b++;
			a[b]=x[i]-'0';	
		}
		if((x[i]<'0'||x[i]>'9')&&(b!=0)){
			for(j=b;j>=1;j--){
				sum+=a[b]*pow(10,b-1);
			}
			b=0;
		}
	}
	printf("%d",sum);
}
//HE45L32LO458T6H359ISIS1BO589RNT34ODEVN80AJA
