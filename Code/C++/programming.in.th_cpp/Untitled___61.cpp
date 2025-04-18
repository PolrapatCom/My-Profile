#include <iostream>
using namespace std;

int main(){
	int n,k,m,p,sum=0; cin >> n >> k >> m >> p;
	char x[n+1],y[n+1];
	cin >> x >> y;
	for(int i=0;i<n;i++){
		if(y[i]=='X') sum+=p;
		else if(x[i]==y[i]) sum+= k;
		else if(x[i]!=y[i]) sum-= m;
	}
	cout << "Your score:" << sum;
}

