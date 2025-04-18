#include <bits/stdc++.h>
using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int x,y;
	cin >> x;
	vector<int> v;
	for(int i=0;i<x;i++){
		cin >> y;
		v.push_back(y);
	}
	int ans = 0,sum,start=0,end=0;
	for(int i=1;i<x;i++){
		for(int j=0;j<x-i;j++){
			sum = accumulate(v.begin()+j,v.begin()+i+j+1,0);
			cout << j << " " << i+j << " " << sum << endl;
			if(sum>ans){
					start = j;
					end = i+j;
					ans=sum;
				}
			}
		}
	if(ans<1){
		cout << "Empty sequence";
		return 0;
	}
	y=end-start+1;
	for(int i=start;i<=end;i++){
		cout << v[i] << " ";
	}
	cout << endl << ans;
}
