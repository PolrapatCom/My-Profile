#include <stdio.h>

char cha[200],array[200],a;
int i,num=0;
int count[200];
main(){
	printf("Enter massage : ");
	gets(cha);
	for(i=0;cha[i]!='\0';i++){
		num++;
	}
	for(i=0;i<num;i++){
		count[(int)(cha[i])]++;
	}
	for(i=0;i<200;i++){
		if(count[i]!=0){
			if(i != ' ') printf("'%c'=%d\n",i,count[i]);
		}
	}
}

