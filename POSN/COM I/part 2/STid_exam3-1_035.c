#include <stdio.h>

main(){
	char x;
	int i;
	printf("Please Enter Character: ");
	scanf("%c",&x);
	if((x>='A' && x<='Z')){
		for(i=0;i<=x-'A';i++){
			printf("%c ",'A'+i);
		}	
	}
	else
	return 0;	
}

