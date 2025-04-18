#include <bits/stdc++.h>
using namespace std;

int main(){
	multiset <int,greater<int> > s;
	multiset <int,greater<int> >::iterator itr = s.begin();
	int x,y; char ch;
	cin >> x;
	for(int i=0;i<x;i++){
		cin >> ch;
		if(ch=='P'){
			cin >> y;
				s.insert(y);
		}
		else if(ch=='Q'){
			itr = s.begin();
			if(!(s.empty())){
				cout << *itr << endl;
				s.erase(itr);
			}
			else{
				cout << -1 << endl;
			}
		}
	}
}
