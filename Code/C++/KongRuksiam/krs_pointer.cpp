#include "stdio.h"

int number = 100;
int *p1 = &number;

main(){
	printf("Number is %d\n",number);
	printf("Address is %p\n",&number);
	printf("Pointer address is %p\n",p1);
	printf("Value is %d\n",*p1);
}

