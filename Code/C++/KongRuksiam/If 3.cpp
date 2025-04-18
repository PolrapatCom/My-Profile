#include "stdio.h"
char grade;
int score1,score2;
main(){
	scanf("%d%d",&score1,&score2);
	grade = (score1>=50) ? 'A' : 'F';
	printf("1 : grade = %c\n",grade);
	grade = (score2>=50) ? 'A' : 'F';
	printf("2 : grade = %c",grade);
}

