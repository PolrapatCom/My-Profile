#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=4,m=4;int x[n][m];
	 for(int i=0;i<n;i++){
	 	for(int j=0 ;j<m;j++){
	 		cin >> x[i][j];
		 }
	 }
	 for(int i=0;i<n;i++){
	 	for(int j=0 ;j<m;j++){
	 		cout << x[i][j] << " ";
		 }
		 cout << endl;
	 }
}
