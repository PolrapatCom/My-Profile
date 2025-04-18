#include <stdio.h>

main(){
	int y;
	 for(y=2; y<13; y++) {
        printf("9 x %d = ", y);
        if(y*9 % 2 == 1) printf("-\n");
        else printf("%d\n", y*9);
	}
}

