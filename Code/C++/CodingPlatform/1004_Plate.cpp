#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	for(int i=0;i<y;i++){
		cin >> x >> x;
	}
	int z[y*100]={0},a=0,b=0;
	char ch;
	while(true){
		cin >> ch;
		if(ch=='E'){
			cin >> z[a];
			a++;
		}
		else if(ch=='D'){
			if(a==b){
				cout << "empty" << endl;
				continue;
			}
			cout << z[b] << endl;
			b++;
		}
		else if(ch=='X'){
			cout << 0;
			return 0;
		}
	}
}
