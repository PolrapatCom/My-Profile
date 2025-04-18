#include <stdio.h>

char cha[100];
int i,vowels,constant;
main(){
	printf("Test Data :\n\tInput a string: ");
	gets(cha);
	for(i=0;cha[i]!='\0';i++){
		if(cha[i]=='a'||cha[i]=='e'||cha[i]=='i'||cha[i]=='o'||cha[i]=='u')
		vowels++;
		else if(cha[i]>='a'&&cha[i]<='z')
		constant++;
	}
	printf("\nExpected Output :\n\tNumber of vowels : %d\n\tNumber of constant : %d",vowels,constant);
}

/*Test Data :
	Input a string: string

Expected Output :	
	Number of vowels : 1
	Number of constant : 5*/
