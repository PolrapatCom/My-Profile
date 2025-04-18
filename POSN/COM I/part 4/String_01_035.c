//!=0 len=i
#include <stdio.h>
int i,j,volume=0,num=0;
char cha[30];

main(){
	scanf("%s",cha);
	
	for(i=0;cha[i]!='\0';i++){
		if(cha[i] == 'A' || cha[i] == 'E') volume++;
		if(cha[i] == 'I') volume++;
		if(cha[i] == 'O') volume++;
		if(cha[i] == 'U') volume++;
		if(cha[i] == 'a') volume++;
		if(cha[i] == 'e') volume++;
		if(cha[i] == 'i') volume++;
		if(cha[i] == 'o') volume++;
		if(cha[i] == 'u') volume++;
	}
	for(i=0;cha[i]!='\0';i++){
		num++;	
	}	
	printf("Switch Places : ");
	for(i=num;i>=0;i--){
		printf("%c",cha[i]);
	}
	printf("\nVolume : %d\nSmall to big && big to small : ",volume);
	for(i=0;cha[i]!='\0';i++){
		if(cha[i]>='a'&&cha[i]<='z'){
			cha[i] = cha[i]-'a'+'A';
			printf("%c",cha[i]);
		}
		else if(cha[i]>='A'&&cha[i]<='Z'){
			cha[i] = cha[i]-'A'+'a';
			printf("%c",cha[i]);
		}
	}
}
