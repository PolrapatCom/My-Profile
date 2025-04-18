#include <bits/stdc++.h>
using namespace std;

int main(){
	int x; cin >> x;
	int y; cin >> y;
	int z[y],a[y]={0};
	for(int i=0;i<y;i++){
		cin >> z[i];
		a[z[i]-1]++;
	}
	for(int i=1;i<=x;i++){
		if(a[z[i]-1]==0){continue;}
		for(int j=1;j<=x;j++){
			printf("%d ",j);
		}
		cout << endl;
	} 
}
