#include <bits/stdc++.h>
#define f first
#define s second
#define int long long int
using namespace std;

const int N = 1e7+1;
int dp[N];
int coin[N];
int n,sum;

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    cin >> n >> sum;
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> coin[i];
    }
    for(int i=1;i<=sum;i++){
        dp[i] = INT_MAX;
        for(int j=1;j<=n;j++){
            if(i>=coin[j]) dp[i] = min(dp[i] , 1 + dp[i-coin[j]]);
        }
    }
    dp[sum] == INT_MAX ? cout << -1 : cout << dp[sum];        
    return 0;   
}