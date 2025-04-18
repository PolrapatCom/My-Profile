#include <bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[],vector<int>& vis){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis);
        }
    }
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int city,n;
    cin >> city >> n;
    vector<int>adj[city+1];
    vector<int>vis(n+1,0);
    for(int i = 0;i<n;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for(int i=1;i<=city;i++){
        if(!vis[i]){
            dfs(i,adj,vis);
        }
    }

    return 0;   
}