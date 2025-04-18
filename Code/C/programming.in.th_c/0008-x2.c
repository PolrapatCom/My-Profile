#include "stdio.h"
#include <math.h>
//error if s is negative number.
main(){
	int x1,s;
	scanf("%d %d",&x1,&s);
	int result = fabs(2*s-x1);
	printf("%d",result);
}
/*(x1 + x2) / 2 = s
x1 + x2 = 2*s
x2 = 2*s - x1*/

