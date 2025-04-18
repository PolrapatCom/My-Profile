#include <stdio.h>

struct data{
	int id;
	float grade;
};

int i,num,count=0;
struct data seen[500];
float g;

main(){
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		scanf("%d %f",&seen[i].id,&seen[i].grade);
	}
	scanf("%f",&g);
	for(i=1;i<=num;i++){
		if(seen[i].grade>=g){
		printf("%d\n",seen[i].id);
		count++;
		}
	}
	if(count==0)
	printf("None");
}
