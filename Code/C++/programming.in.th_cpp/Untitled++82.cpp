#include <iostream>
using namespace std;

struct data{
	int id;
	float score;
}data[500];
//float receive int has problem
int main(){
	int x,i,swp2;
	float sum=0,swp;
	cin >> x;
	for(i=0;i<x;i++){
		cin >> data[i].id >> data[i].score;
		sum+=data[i].score;
	}
	for(i=0;i<x;i++){
		if(data[i].score>100){
			cout << "Error";
			return 0;
		}
	}
	float avg = sum/i;
	for(i=0;i<x;i++){
		for(int j=i;j<x;j++){
			if(data[i].id>data[j].id){
				swp=data[i].score;
				data[i].score=data[j].score;
				data[j].score=swp;
			}
			if(data[i].id>data[j].id){
				swp2=data[i].id;
				data[i].id=data[j].id;
				data[j].id=swp2;
			}
		}
	}
	for(i=0;i<x;i++){
		if(data[i].score>=avg){
			cout << data[i].id << endl;
		}
	}
}
//5
//65070912 99.1
//65070684 62
//65070154 85.4
//65070166 37.9
//65070184 55.3
