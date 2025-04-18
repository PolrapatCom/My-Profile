#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,q; cin>>n>>m>>q;
	vector<int> x(n,1); //start
	int a,k,b;
	for(int i=0;i<m;i++){
		cin >> a >> k;
		for(int j=a;j<a+k;j++){
			x[j-1]*=-1;
		}
	}
	for(int i=0;i<q;i++){
		cin >> b;
		int sum=0,c=b;
		while(b-1>=0&&x[b-1]==x[b]&&b<n){
				sum++;
				b++;
		}
		while(c-2>=0&&x[c-1]==x[c-2]){
				sum++;
				c--;
		}
		cout << sum+1 << endl;
	}
}
