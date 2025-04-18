#include <iostream>
#include <string>
using namespace std;

int main(){
	int n; cin >> n;
	string x[n+1],y;
	for(int i=0;i<n;i++){
		cin >> x[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(x[i].length()>x[j].length()){
				y=x[i];
				x[i]=x[j];
				x[j]=y;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << x[i] << endl;
	}
}
