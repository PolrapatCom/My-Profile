#include <bits/stdc++.h>

using namespace std;

int main(){
	int x[5];
	for(int i=0;i<5;i++) cin >> x[i];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(x[i]>x[j]){
				int swp = x[i];
				x[i]=x[j];
				x[j]=swp;
			}
		}
	}
	for(int i=0;i<5;i++) cout << x[i] << endl;
}
