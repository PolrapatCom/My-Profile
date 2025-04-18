#include <bits/stdc++.h>
using namespace std;

int main(){
	int a; cin >> a;
	int x[a],y[a];
	for(int i=0;i<a;i++){
		cin >> x[i] >> y[i];
	}
	int min_xd = INT_MAX;
	for(int i=0;i<a;i++){
		for(int j=0;j<a-i;j++){
			int sum1=1,sum2=0;
			for(int k=j;k<j+i+1;k++){
				sum1*=x[k];
				sum2+=y[k];
			}
			if(abs(sum1-sum2)<min_xd){
				min_xd = abs(sum2-sum1);
			}
		}
	}
	cout << min_xd;
}
