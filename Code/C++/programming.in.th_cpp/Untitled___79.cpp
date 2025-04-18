#include <iostream>
#define a 0
#define b 1
#define c 2
#define d 3
#define e 4
#define f 5
using namespace std;

int main(){
	int x[6];
	for(int i=0;i<6;i++){
		cin >> x[i];
	}
	cout << x[e]*x[a]*x[c] << " ";
	cout << x[a]*x[c]*x[f]+x[e]*x[a]*x[d]+x[e]*x[b]*x[c]<<" ";
	cout << x[a]*x[d]*x[f]+x[b]*x[c]*x[f]+x[e]*x[b]*x[d]<<" ";
	cout << x[b]*x[d]*x[f];
}
