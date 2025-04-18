#include <stdio.h>

char cha[641];
int i,num,p=0;
main(){
	scanf("%s",cha); //if level
	for(i=0;cha[i]!='\0';i++){
		num++; // num = 5
	}
	for(i=0;i<num;i++){ //first i = 4
		if(cha[i]!=cha[num-1-i])
		p=1;
	}
	if(p==0)
	printf("Yes");
	if(p==1)
	printf("No");
}
//cha[0] vs cha[4]
//cha[1] vs cha[3]
//cha[2] vs cha[2]
//cha[3] vs cha[1]
//cha[4] vs cha[0]
