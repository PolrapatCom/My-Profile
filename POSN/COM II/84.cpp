#include <bits/stdc++.h>
#define ll long long    
using namespace std;

int mod = 1e9+7;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);   
    int a,b;
    cin >> a >> b;
    vector<vector<ll>>dp(a+1,vector<ll>(b+1,1e8));
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i==j){
                dp[i][j] = 0;
            }
            for(int k=1;k<i;k++){
                dp[i][j] = min(dp[i][j] , dp[k][j] + dp[i-k][j] + 1);
            }
            for(int k=1;k<j;k++){
                dp[i][j] = min(dp[i][j] , dp[i][k] + dp[i][j-k] + 1);
            }
        }
    }
    cout << dp[a][b];

    return 0;
}