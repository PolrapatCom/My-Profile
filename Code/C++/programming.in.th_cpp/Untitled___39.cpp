#include <iostream>

using namespace std;

int main(){
	int x,swp,cnt=0;
	int y[500]={0};
	for(int i=0;i>-1;i++){
		cin >> y[i];
		if(y[i]==0) break;
		cnt++;
	}
	string find;
	cin >> find;
	for(int i=0;i<cnt;i++){
		for(int j=i;j<cnt;j++){
			if(y[i]>y[j]){
				swp = y[i];
				y[i] = y[j];
				y[j] = swp;
			}
		}
	}
	if(find=="max"||find=="Max"||find=="mAx"||find=="maX"||find=="MAx"||find=="mAX"||find=="MaX"||find=="MAX"){
		for(int i=cnt-1;i>-1;i--){
			cout << y[i] << " ";
		}
	}
	if(find=="min"||find=="Min"||find=="mIn"||find=="miN"||find=="MIn"||find=="mIN"||find=="MiN"||find=="MIN") 
		for(int i=0;i<cnt;i++){
			cout << y[i] << " ";
		}
}
// 2 1 4 5 3
// 1 2 4 5 3
// 1 2 4 5 3
// 1 2 3 5 4
// 1 2 3 4 5
