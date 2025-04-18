#include <stdio.h>

int a,i,j;

void isprime(int num){
	int p=0;//prime
	for(i=2;i<num;i++){
		if(num%i==0)
		p=1;//not prime
	}
	if(num==1)
	printf("No :( ");
	else if(p==0)
	printf("YesYesYes!!! It's prime!!!");
	if(p==1)
	printf("No :( ");
}
main(){
	scanf("%d",&a);
	isprime(a);
	
}
