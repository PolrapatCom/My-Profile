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
    ll y[n+1];
    ll sum = 0;
    for(int i=1;i<=n;i++){
        sum += x[i];
        y[i] = sum; 
    }
    for(int i=0;i<q;i++){
        int a,b,c;
        cin >> c >> a >> b;
        if(c == 1){
            ll change = b-x[a];
            for(int i=1;i<=a;i++){
                for(int j=a;j<=n;j++){
                    y[i][j] += change;
                }           
            }
        }
        else{
            cout << y[a][b] << endl;
        }
    }
    for(int i=0;i<q;i++){
        int a,b,c;
        cin >> c >> a >> b;
        if(c == 1){
           x[a] = b;
        }
        else{
            ll sum = 0;
            for(int i=a;i<=b;i++){
                sum += x[i];
            }
            cout << sum << endl;
        }
    }
    return 0; 
} 
