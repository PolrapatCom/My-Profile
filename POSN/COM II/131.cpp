#include <bits/stdc++.h>
using namespace std;

int r1,b1,g1,n1,ans;
int dp[51][51][51][4];

int f(int r,int b,int g,int prev,int n){
    if(r==0 && b==0 && g==1){
        return 1;
    }
    if(r==0 && b==1 && g==0){
        return 1;
    }
    if(r==1 && b==0 && g==0){
        return 1;
    }
    if(dp[r][b][g][prev]!=-1){
        return dp[r][b][g][prev];
    }
    int count = 0;
    if(r>0 && prev!=0){
        count += f(r-1,b,g,0,n-1);
    }
    if(b>0 && prev!=1){ 
        count += f(r,b-1,g,1,n-1);
    }
    if(g>0 && prev!=2){
        count += f(r,b,g-1,2,n-1);
    }
    return dp[r][b][g][prev] = count;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> r1 >> b1 >> g1;
    n1 = r1 + b1 + g1;
    int maxi = max(r1,max(b1,g1));
    //vector<vector<vector<vector<int>>>>dp(r1+1,vector<vector<vector<int>>>(b1+1,vector<vector<int>>(g1+1,vector<int>(maxi+1,-1))));
    for(int i=0; i<=50; i++) {
        for(int j=0; j<=50; j++) {
            for(int k=0; k<=50; k++) {
                dp[i][j][k][0] = -1;
                dp[i][j][k][1] = -1;
                dp[i][j][k][2] = -1;
            }
        }
    }
    ans = f(r1,b1,g1,-1,n1);
    cout << ans;
    return 0;
}