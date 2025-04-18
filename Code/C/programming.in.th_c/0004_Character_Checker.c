#include <stdio.h>
#include <string.h>
main() {
    char text[10000];
    int A=0,a=0;
    scanf("%s",text);
    for(int i = 0;i < strlen(text);i++){
    	if (text[i]>='A' && text[i]<='Z') {
           A=1;
		}   
		else if (text[i]>='a' && text[i]<='z'){
		   	a=1;
		   }   
	}
	if(A==1 && a==1){
		printf("Mix");
	}
	else if(A==1){
		printf("All Capital Letter");
	}
	else{
		printf("All Small Letter");
	}
}

