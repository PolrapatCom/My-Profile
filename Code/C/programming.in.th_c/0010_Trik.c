#include <stdio.h>
main(){
	int swp,i,j,A=1,B=0,C=0;
	char cha[100];
	scanf("%s",cha);
	for(i=0;cha[i]!='\0';i++){
		if(cha[i]=='A'){
			swp = A;
			A = B;
			B = swp;
		}
		else if(cha[i]=='B'){
			swp = B;
			B = C;
			C = swp;
		}
		else if(cha[i]=='C'){
			swp = C;
			C = A;
			A = swp;
		}	}
	if(A==1) printf("%d",1);
	if(B==1) printf("%d",2);
	if(C==1) printf("%d",3);	}
