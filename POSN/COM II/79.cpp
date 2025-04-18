#include <bits/stdc++.h>
using namespace std;

int mod =(int)1e9 + 7;

int f(int idx,int k,vector<int>& x,vector<vector<int>>& dp){
   if(k==0){
    return 1;
   }
   if(k<0){
    return 0;
   }
   if(idx==0){
    return k==x[0];
   }
   if(dp[idx][k]!=-1){
    return dp[idx][k];
   }
   int val = 0;
   val = val + f(idx-1,k-x[idx],x,dp) + f(idx-1,k,x,dp);
   val = val%mod;
   return dp[idx][k] = val;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;
    vector<int>x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    cout << f(n-1,k,x,dp);
    return 0;
}