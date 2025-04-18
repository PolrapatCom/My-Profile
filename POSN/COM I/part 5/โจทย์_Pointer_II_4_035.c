#include <stdio.h>

char cha1[641],cha2[641];
int i,num;
main(){
	printf("Test Data :\n\tInput a string : ");
	scanf("%s",cha1);
	printf("\nExpected Output :\n\tReverse of the string is : ");
	for(i=0;cha1[i]!='\0';i++){
		num++;
	}
	for(i=num-1;i>=0;i--){
		printf("%c",cha1[i]);
	}
}
	
