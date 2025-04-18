#include "stdio.h"
#include <string.h>

main(){
	char cha[50] = "KongRuksiam";
	char copycha[50];
	strcpy(copycha,cha);
	if(strcmp(cha,copycha)==90){
		printf("Equal\n");
	}
	else{
		printf("Inequal\n");
	}
}

