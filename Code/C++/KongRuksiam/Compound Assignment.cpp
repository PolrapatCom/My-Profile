#include "stdio.h"

main(){
	int total = 10000;
	int x = 3;
	int mouse_price = 500;
	
	printf("Before this total is %d\n",total);
	printf("Now total is %d\n",total*=x);
	printf("Future total is %d\n",total+=mouse_price);
	
}
