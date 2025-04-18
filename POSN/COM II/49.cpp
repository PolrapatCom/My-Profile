#include <bits/stdc++.h>
using namespace std;

double f(int idx,int n,double sum,vector<int>vis,vector<vector<double>>& v,vector<vector<int>>& dp){
    if(idx==0){
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return v[idx][i];
            }
        }
    }
    double multiple = 1.00;
    for(int i=0;i<n;i++){
        if(vis[i]) continue;
        vis[i]=1;
        multiple = max(multiple,f(idx-1,n,sum*v[idx][i],vis,v,dp));
        vis[i]=0;
    }
    return multiple;
}

int main(){
    int n; cin >> n;
    vector<vector<double>>v(n,vector<double>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
            v[i][j] /= 100;
        }
    }
    vector<vector<int>>dp(n,vector<int>(n,-1));
    vector<int>vis(n,0);
    cout << fixed << setprecision(6) << f(n-1,n,1,vis,v,dp)*100;
    return 0;
}