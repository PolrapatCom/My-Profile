#include <stdio.h>
int sum,avg;
main(){
	int score[2][3]={
	{1,2,3},
	{4,5,6}
	};
	for(int row = 0;row<2;row++){
		for(int column=0;column<3;column++){
			printf("row %d column %d is %d\n",row+1,column+1,score[row][column]);
			sum+=score[row][column];
			avg = sum/6;
		}
	}
	printf("************************\n");
	printf("Total = %d\n",sum);
	printf("Average = %d\n",avg);
}
