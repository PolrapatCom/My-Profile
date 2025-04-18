#include <bits/stdc++.h>
using namespace std;

int main(){
	int w,h,n;
	cin >> w >> h >> n;
	int x[w+10000]={0},a,b;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		for(int j=a;j<a+b;j++){
			x[j]++;
		}		
	}
	int s100=0,s50=0;
	for(int i=0;i<w;i++){
		if(x[i]==0){
			s100++;
		}
		else if(x[i]==1){
			s50++;
		}
	}
	cout << s100*h << " " << s50*h;
}

//7 3 3
//1 2
//5 3
//2 2
//
//6 12
