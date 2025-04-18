#include <bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int main(){
    int n,x;
    cin >> n >> x;
    int dp[x+1]={};
    int data[n+1]={};
    for(int i=1;i<=n;i++){
        cin >> data[i];
    }
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=data[i];j<=x;j++){
            dp[j] = (dp[j] + dp[j-data[i]])%mod;
        }
    }
    cout << dp[x];
    return 0;
}