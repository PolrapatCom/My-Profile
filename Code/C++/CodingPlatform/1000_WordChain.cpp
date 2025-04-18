#include <bits/stdc++.h>
using namespace std;

int main(){
	int l,n;
	cin >> l >> n;
	string str1,str2;
	cin >> str1;
	for(int i=0;i<n;i++){
		int count = 0;
		cin >> str2;
		for(int j=0;j<l;j++){
			if(str2[j]!=str1[j]){
				count++;
			}
			if(count > 2){
				cout << str1;
				return 0;
			}
		}
		str1.swap(str2);
	}
	cout << str2;
	return 0;
}
