#include <stdio.h>
void swap (int *, int *);
void main ( )
{

int x = 5, y = 10;
printf("Before swap : x = %d", x,", y = %d\n", y);
swap(&x,&y);
printf("After swap : x = %d", x,", y = %d\n", y);

}
void swap (int *px, int *py)
{

int temp;
temp = *px; // temp ?????????? px ???-> address ?????? x -> ????? 5
*px = *py;
*py = temp;

}
