#include <bits/stdc++.h>
using namespace std;

int main(){
	int x[4][4],y[4]={0},z[4]={0,1,2,3};
	string s[4];
	for(int i=0;i<4;i++){
		cin >> s[i];
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin >> x[i][j];
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){continue;}
			if(x[i][j]>x[j][i]){y[i]+=3;}
			else if(x[i][j]==x[j][i]){y[i]+=1;}
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(y[i]>y[j]){
				int swp = y[i];
				y[i] = y[j];
				y[j] = swp;
				swp = z[i];
				z[i] = z[j];
				z[j] = swp;
			}
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(y[i]==y[j]&&x[i][j]>x[j][i]){
				int swp = y[i];
				y[i] = y[j];
				y[j] = swp;
				swp = z[i];
				z[i] = z[j];
				z[j] = swp;
			}
		}
	}
	for(int i=0;i<4;i++){
		cout << s[z[i]] << " " << y[i] << endl;
	}
}
