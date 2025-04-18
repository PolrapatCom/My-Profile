#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    int x[n];
    int dp[n+1];
    for(int i=0;i<n;i++){
        cin >> x[i];
        dp[i]=1e8;
    }
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=x[i];j++){
            if(i+j<n) dp[i+j] = min(dp[i+j],1+dp[i]);
        }
    }
    cout << dp[n-1];
    return 0;
} 