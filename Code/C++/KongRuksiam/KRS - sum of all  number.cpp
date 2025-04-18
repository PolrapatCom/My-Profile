#include "stdio.h"

main(){
	int count,number,total = 0;
	for(number = 1;number > 0;number++){
	printf("Enter your number %d : ",number);
	scanf("%d",&count);
		if(count <= 0){
			break;	
				}
				total+=count;
					}
						printf("Sum is %d",total);
							}

