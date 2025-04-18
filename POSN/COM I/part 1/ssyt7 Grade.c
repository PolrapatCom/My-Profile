#include <stdio.h>


main(){
	int x,a,b;
	scanf("%d%d",&a,&b);
	x = (a+b)/2;
	if(x>= 80 && x<=100)
		printf("Grade = G");
	else if (x>= 50 && x<80)
		printf("Grade = P");
	else
	printf("Grade = F");
	}


