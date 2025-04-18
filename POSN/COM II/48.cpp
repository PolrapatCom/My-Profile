#include <bits/stdc++.h>
using namespace std;

int main(){
    int power,n,m;
    cin >> power >> n >> m;
    queue<pair<int,int>>q;
    vector<int>dp[n+1];
    vector<int> vis(n+1,0);
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        dp[x].push_back(y);
    }
    q.push({1,power});
    int maxi = 0;
    while(!q.empty()){
        int node = q.front().first;
        int p = q.front().second;
        q.pop();
        if(p!=0 && !vis[node]){
            vis[node] = 1;
            for(auto it : dp[node]){
                q.push({it,p-1});
            } 
            
        }
       maxi = max(maxi,node);
    }
    
    cout << maxi;
    return 0;
}