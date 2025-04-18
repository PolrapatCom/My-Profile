#include "stdio.h"
#include <string.h>

main(){
	char cha[50] = "KongRuksiam";
	char copycha[50];
	strcopy(copycha,cha);
	printf("%s",copycha);
}

