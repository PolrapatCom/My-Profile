#include <bits/stdc++.h>
using namespace std;

int f(int n,int k,vector<int>& x,vector<int>& dp){
    if(k==0){
        return 0;
    }
    if(k<0){
        return -1;
    }
    if(dp[k]!=-2){
        return dp[k];
    }
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        int val = f(n,k-x[i],x,dp);
        if(val!=-1)
        mini = min(mini,val + 1);
    }
    if(mini == INT_MAX){
        mini = -1;
    }
    return dp[k] = mini;
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
    vector<int>dp(k+1,-2);
    cout << f(n,k,x,dp);
    return 0;
}