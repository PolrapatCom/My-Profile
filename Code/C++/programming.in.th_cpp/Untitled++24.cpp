#include <bits/stdc++.h>

using namespace std;

int main(){
	int y;
	cin >> y;
	int x[y];
	for(int i=0;i<y;i++) cin >> x[i];
	for(int i=0;i<y;i++){
		for(int j=0;j<y;j++){
			if(x[i]>x[j]){
				int swp = x[i];
				x[i]=x[j];
				x[j]=swp;
			}
		}
	}
	for(int i=0;i<y;i++) cout << x[i] << endl;
}
