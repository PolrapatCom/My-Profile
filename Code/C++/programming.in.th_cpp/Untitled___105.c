#include <stdio.h>

void printfcomma (int n) {
    if (n < 0) {
        printf ("-");
        printfcomma (-n);
        return;
    }
    if (n < 1000) {
        printf ("%d", n);
        return;
    }
    printfcomma (n/1000);
    printf (",%03d", n%1000);
}

int main(){
	int a1000=0,a500=0,a100=0,a50=0,a20=0;
	int b10=0,b5=0,b1=0;
	int x,i;
	scanf("%d",&x);
    int y=x;
	while(x>0){
		if(x>=1000){
			x-=1000;
			a1000++;
		}
		else if(x>=500){
			x-=500;
			a500++;
		}
		else if(x>=100){
			x-=100;
			a100++;
		}
		else if(x>=50){
			x-=50;
			a50++;
		}
		else if(x>=20){
			x-=20;
			a20++;
		}
		else if(x>=10){
			x-=10;
			b10++;
		}
		else if(x>=5){
			x-=5;
			b5++;
		}
		else if(x>=1){
			x-=1;
			b1++;
		}
	}
	if(a1000!=0) {
		printf("?????? 1,000? : %d ????\n",a1000);
	}
  if(a500!=0) {
		printf("?????? 500? : %d ????\n",a500);
	}
  if(a100!=0) {
		printf("?????? 100? : %d ????\n",a100);
	}
  if(a50!=0) {
		printf("?????? 50? : %d ????\n",a50);
	}
  if(a20!=0) {
		printf("?????? 20? : %d ????\n",a20);
	}
  if(b10!=0) {
		printf("?????? 10? : %d ??????\n",b10);
	}
  if(b5!=0) {
		printf("?????? 5? : %d ??????\n",b5);
	}
  if(b1!=0) {
		printf("?????? 1? : %d ??????\n",b1);
	}
  printf("?????????????????????? ");
  printfcomma(y);
  printf(" ???");
}









