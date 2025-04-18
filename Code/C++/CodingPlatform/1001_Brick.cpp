#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	char x[n][m]; int y[m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> x[i][j];
		}
	}
	for(int k=0;k<m;k++){
		cin >> y[k];
	}
	int cnt=0;
	for(int i=0;i<m;i++){
		cnt = 0;
		while(y[i]){
			if(x[0][i]=='#'||x[0][i]=='O') break;
			if(cnt==n-1){
				x[n-1][i] = '#';
				cnt = 0; y[i]--;
			}
			else if(x[cnt][i]=='.'&&(x[cnt+1][i]=='#'||x[cnt+1][i]=='O')){
				x[cnt][i]='#';
				cnt = 0; y[i]--;
			}
			else{
				cnt++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << x[i][j];
		}
		cout << endl;
	}
}
