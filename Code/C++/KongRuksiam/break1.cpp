#include "stdio.h"

main(){
	for(int count = 1;count<=10;count++){
		printf("%d\n",count);
		if(count == 5){
			break;
		}
	}
}
