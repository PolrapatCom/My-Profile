#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int mod = 1e9+7;
    cin >> x;
    vector<long long>dp(x+1,0);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=6;j++){
            if(j > i) break;
            dp[i] = (dp[i] + dp[i-j])% mod;
        }
    }
    cout << dp[x];
}