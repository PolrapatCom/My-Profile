#include <bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);   
    int n,x;
    cin >> n >> x;
    vector<int>dp(x+1,0);
    int price[n+1];
    int page[n+1];
    for(int i=1;i<=n;i++){
        cin >> price[i];
    }
    for(int i=1;i<=n;i++){
        cin >> page[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=x;j>0;j--){
            if(j-price[i]<0) continue;
            dp[j] = max(dp[j],page[i] + dp[j-price[i]]);
        }
    }
    cout << dp[x];
    return 0;   
}