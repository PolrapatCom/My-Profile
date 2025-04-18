#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
vector<bool>vis;
vector<int>lead;
int cc = 0;

void dfs(int n){
    vis[n] = true;
    for(auto it : adj[n]){
        if(!vis[it]){
            dfs(it);
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vis.resize(n+1);
    adj.resize(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cc++;
            lead.push_back(i);
            dfs(i);
        }
    }
    cout << cc-1 << endl;
    int u = lead[0];
    if(cc > 1)
    for(int i=1;i<cc;i++){
        int v = lead[i];
        cout << u << " " << v << " ";
        u = v;
    }
    return 0;
}