#include <bits/stdc++.h>
using namespace std;

int main(){
	int N=9;
	double n = N;int cnt=0;
        while(--N,--n){
            if(sqrt(n)==sqrt(N)){
                cnt++;
            }
            cout << sqrt(n) << " " << sqrt(N) << endl;
        }
        cout << n<<" " << N<<" " << " "<< cnt;
}
