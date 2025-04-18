#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin >> x;
	int a=0,b=0,c=0,d=0,e=0;
	float sum=0;
	for(int i=0;i<x;i++){
		cin >> y;
		sum += y*1;
		cin >> y;
		sum += y*0.75;
		cin >> y;
		sum += y*0.5;
		cin >> y;
		sum += y*0.25;
		cin >> y;
		sum += y*0.125;
	}
	cout << ceil(sum);
}
