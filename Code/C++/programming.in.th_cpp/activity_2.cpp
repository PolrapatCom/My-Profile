#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,i;
	cin >> x;
	double sum=1;
	int a=x/2;
	if(x<=2){
		cout << "2";
		return 0;
	}
	for(i=x;a>=1;i--){
		sum*=i;	
		sum/=a;
		a--;
	}
	if(x%2==1) sum*=2;
	printf("%.0f",sum);
}
