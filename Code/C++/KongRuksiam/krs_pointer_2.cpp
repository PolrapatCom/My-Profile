#include "stdio.h"

char letter = 'A';
char *p2 = &letter;

main(){
	printf("Letter is %c\n",letter);
	printf("Address is %p\n",&letter);
	printf("Pointer address is %p\n",p2);
	printf("Value is %c\n",*p2);
}

