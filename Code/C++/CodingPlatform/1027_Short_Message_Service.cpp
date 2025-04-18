#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int n,x[7]={0},y[7]={1,1,1,1,1,1,1},a=0;
	while(true){
		int cnt=0,minn=0;
		cin >> s;
		if(s=="!") break;
		n=s.length();
		for(int i=0;i<n;i++){
			x[s[i]-'A']++;
		}
		while(true){
			int i=0;
			if(x[i]!=0){
				minn = x[i];
				break;
			}
			i++;
		}
		for(int i=0;i<n;i++){
			if(x[i]<minn&&x[i]!=0&&y[i]!=0){
				minn = x[i];
			}
		}
		for(int i=0;i<n;i++){
			if(x[i]==minn&&y[i]!=0){
				cnt++;
			}
		}
		if(cnt>1){
			continue;
		}
		for(int i=0;i<n;i++){
			if(x[i]==minn){
				y[i]=0;
			}
		}
	}
	for(int i=0;i<7;i++){
		if(x[i]!=0&&y[i]!=0) a++;
	}
	char z[8] = {'A','B','C','D','E','F','G'};
	cout << a << endl;
	for(int i=0;i<7;i++){
		for(int j=i;j<7;j++){
			if(x[i]<x[j]&&y[i]!=0){
				int swp = x[i];
				x[i] = x[j];
				x[j] = swp;
				swp = y[i];
				y[i] = y[j];
				y[j] = swp;
				char swp2 = z[i];
				z[i] = z[j];
				z[j] = swp2;
			}
		}
	}
	for(int i=0;i<7;i++){
		if(y[i]==0) {continue;}
		if(x[i]!=0&&y[i]!=0){
			cout << z[i] << " " << x[i] << endl;
		}
	}
}
