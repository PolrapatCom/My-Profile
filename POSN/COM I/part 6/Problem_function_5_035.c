#include <stdio.h>

struct data{
	char id[500];
	char fname[500];
	char lname[500];
	float grade;
};

float max;
int i,num, idx;
struct data seen[500];

void poom(num){
	max = seen[0].grade;
	idx = 0;
	for(i=1;i<num;i++){
		if(seen[i].grade>max) {
			max = seen[i].grade;
			idx = i;
		}
	}
}

main(){
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%s%s%s%f",seen[i].id,seen[i].fname,seen[i].lname,&seen[i].grade);
	}
	poom(num);
	printf("\n%s %s %s %.2f",seen[idx].id,seen[idx].fname,seen[idx].lname,seen[idx].grade);
}
