#include <stdio.h>
void showArray(int arr[],int count);
main(){
	int score[5] = {1,2,3,4,5}; 
	showArray(score,5);
	int height[6] = {10,20,30,40,50,60};
	showArray(height,6);
	int weight[7] = {100,200,300,400,500,600,700};
	showArray(weight,7);
}
void showArray(int arr[],int count){
	printf("----------data----------\n");
	for(int i = 0;i<count;i++){
		printf("index %d = %d\n",i,arr[i]);
	}
}

