#include <stdio.h>

main(){
	int x = 5;
int* ptr = &x;

scanf("%d", &x);
printf("%d\n", x);

scanf("%d" ,ptr);
printf("%d\n" ,x );
}

