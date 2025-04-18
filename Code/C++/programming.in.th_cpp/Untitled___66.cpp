#include <iostream>
using namespace std;

int main(){
	float x[500]={0},y,sum=0;
	int i;
	cin >> y; sum+=y;
	if(y<=0){
		cout << "No Data";
		return 0;
	}
	for(i=1;i>-1;i++){
		cin >> x[i];
		if(x[i]<=0){
			break;
		}
		sum+=x[i];
	}
	printf("%.2f",1.0*sum/i);
}

