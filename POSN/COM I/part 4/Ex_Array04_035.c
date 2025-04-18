#include <stdio.h>

main(){
	char name[10][10]={"siri","nadet","pranee","wichai","somchai","wichaya","manee","arthit","vittaya","chujai"};
	char gender[10]={'M','F','M','F','F','M','M','F','F','M'};
	int height[10]={175,160,158,160,180,163,162,170,175,159};
	int weight[10]={54,65,48,60,70,56,55,63,62,43};
	float bmi[10];
	int i;
	float M=0,F=0,sumf=0,summ=0;
	for(i=0;i<=9;i++){
		if(gender[i]=='F'){
			F++;
			sumf+=height[i];
		}
				
	}
	float avgf=sumf/F;
	printf("Average height of girl : %f\n",avgf);
	for(i=0;i<=9;i++){
		if(gender[i]=='M'){
			M++;
			summ+=height[i];
		}		
	}
	float avgM=summ/M;
	printf("Average height of Boy : %f\n",avgM);
	for(i=0;i<=9;i++){
		bmi[i]=weight[i]*1.0/height[i]/height[i]*10000;	
	}
	for(i=0;i<=9;i++){
		printf("Name : %s  Gender = %c  height = %d  weight = %d  bmi = %.2f\n",name[i],gender[i],height[i],weight[i],bmi[i]);	
	}
	
}
