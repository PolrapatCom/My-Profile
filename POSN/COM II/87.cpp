#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    ll x[n+1];
    for(int i=1;i<=n;i++){
        cin >> x[i];
    }
    ll y[n+1][n+1];
    // for(int i=1;i<=n;i++){
    //     ll mini = x[i];
    //     for(int j=i;j<=n;j++){
    //         mini = min(mini,x[j]);
    //         y[i][j] = mini;
    //     }           
    // }
    for(int i=0;i<q;i++){
        int a,b;
        cin >> a >> b;
        ll mini = x[a];
        for(int i=a;i<=b;i++){
            mini = min(mini,x[i]);
        }
        cout << mini << endl;
    }
    // for(int i = 0; i <= n; ++i) {
    //     delete[] y[i];
    // }
    return 0; 
}