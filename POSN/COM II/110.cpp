#include <bits/stdc++.h>
#define int long long
#define INT_MAX LLONG_MAX/2
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>>adj(n+1,vector<int>(n+1,INT_MAX));
    for(int i=0;i<m;i++){
        int u,v,w;  
        cin >> u >> v >> w; 
        adj[u][v] = min(adj[u][v], w);
        adj[v][u] = min(adj[v][u], w);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                // if(adj[k][j] == INT_MAX || adj[i][k] == INT_MAX) continue;
                adj[i][j] = min(adj[i][j] , (adj[k][j] + adj[i][k]));
                if(i==j){
                    adj[i][j] = 0;
                }
            }
        }
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin >> a >> b;
        adj[a][b] == INT_MAX ? cout << -1 : cout << adj[a][b];
        cout << endl;
    }
    return 0;
}