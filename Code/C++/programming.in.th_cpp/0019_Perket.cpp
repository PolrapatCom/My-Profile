#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,i,j;
	long x[10]={0},y[10]={0},min=0;
	long sumx = 1,sumy = 0;
	cin >> a;
	for(i=0;i<a;i++){
		cin >> x[i] >> y[i];
		sumx*=x[i],sumy+=y[i];
		min = fabs(sumx - sumy);
	}
	sumx = 1,sumy = 0;
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			
		}
	}
	
	cout << fabs(sumx - sumy);
}
