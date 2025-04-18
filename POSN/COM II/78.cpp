#include <bits/stdc++.h>
using namespace std;

int mod =(int)1e9 + 7;

int f(int k,vector<int>& x,vector<int>& dp){
   if(k==0){
    return 1;
   }
   if(k<0){
    return 0;
   }
   if(dp[k]!=-1){
    return dp[k];
   }
   int val = 0;
   for(int i=0;i<x.size();i++){
    val += f(k-x[i],x,dp);
    val  = val%mod;
   }
   return dp[k] = val;
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
    vector<int>dp(k+1,-1);
    cout << f(k,x,dp);
    return 0;
}