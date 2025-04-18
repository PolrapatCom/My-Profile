#include <bits/stdc++.h>
#define ll long long    
using namespace std;

int mod = 1e9+7;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);   
    int x,n;
    cin >> x;
    int maxi = 1;
    int data[x+1];
    for(int i=1;i<=x;i++){
        cin >> data[i];
        maxi = max(maxi,data[i]);
    }
        vector<vector<ll>>dp(maxi+1,vector<ll>(2,0));
        // ll dp[1000010][2]={0};
        dp[1][0] = dp[1][1] = 1;
        for(int i=2;i<=maxi;i++){
            dp[i][0] = ((dp[i-1][0]*4%mod)+ (dp[i-1][1]))%mod;
            dp[i][1] = ((dp[i-1][0]) + (dp[i-1][1]*2%mod))%mod;
        }
        
    for(int i=1;i<=x;i++){
        cout << (dp[data[i]][0]+dp[data[i]][1])%mod << endl;
    }
    return 0;   
}