#include <stdio.h>

struct data{
	char name[500];
	float score[500];
	float sum;
};
int j,i,num1,num2,count=0;
struct data seen[500];
float g;

main(){
	scanf("%d",&num1);
	scanf("%d",&num2);
	for(i=1;i<=num1;i++){
//		gets(seen[i].name);
		scanf("%s",seen[i].name);
		int min=11;
		for(j=1;j<=num2;j++){
			scanf("%f",&seen[i].score[j]);
			if(min>seen[i].score[j])
			min = seen[i].score[j];
		}
		for(j=1;j<=num2;j++){
			seen[i].sum +=seen[i].score[j];
		}
		seen[i].sum-=min;
	}
	scanf("%f",&g);
	for(i=1;i<=num1;i++){
		if(seen[i].sum >= 1.0*10*(num2-1)*g/100){
			printf("%s\n",seen[i].name);
		}
	}
}
