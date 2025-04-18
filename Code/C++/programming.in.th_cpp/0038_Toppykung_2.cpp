#include <bits/stdc++.h>
#include <string>
#include <set>
using namespace std;

int main(){
	int x;
	string temp;
	set <string> s1;
	cin >> x;
	for(int i=0;i<x;i++){
		cin >> temp;
		s1.insert(temp);
	}
	for(auto j = s1.begin();j != s1.end();j++){
		cout << *j << endl;
	}
}
