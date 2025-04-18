#include <stdio.h>
#include <string.h>
main() {
    char text[10000];
    int A=0,a=0;
    scanf("%s",text);
    for(int i = 0;i < strlen(text);i++){
    	if (text[i]>='A' && text[i]<='Z') {
           A++;
		}   
		else if (text[i]>='a' && text[i]<='z'){
		   	a++;
		   }   
	}
	printf("%d\n",strlen(text));
	printf("%d",A);
	if(A==strlen(text)){
		printf("All Capital Letter");
	}
	else if(a==strlen(text)){
		printf("All Small Letter");
	}
	else{
		printf("Mix");
	}
}

