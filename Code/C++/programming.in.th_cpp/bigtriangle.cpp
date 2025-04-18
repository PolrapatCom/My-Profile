#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,i,j,k;
	cin >> a;
	float x[a],y[a];
	for(i=0;i<a;i++){
		cin >> x[i] >> y[i];
	}
	float max=0;
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			for(k=0;k<a;k++){
				if(abs(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i])/2>max){
					max = abs(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i])/2;
				}
			}
		}
	}
	printf("%.3f",max);
}
//x1y2 + x2y3 + x3y1 - y1x2 - y2x3 - y3x1|2

