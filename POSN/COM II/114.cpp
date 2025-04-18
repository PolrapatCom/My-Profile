#include <bits/stdc++.h>
#define int long long int
using namespace std;

int n,m,a,b,c;

signed main(){
    cin.tie(NULL)->sync_with_stdio(false);
    cin >> n >> m;
    vector<int>distance(n+1,LLONG_MAX/2);
    distance[1] = 0;
    vector<pair<int,int>>adj[n+1];
    for(int i=1;i<=m;i++){
        cin >> a >> b >> c;
        adj[a].push_back({c,b});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    q.push({0,1});
    while(!q.empty()){
        auto it = q.top();
        q.pop();
        int node = it.second;
        int weight = it.first;
        if(weight > distance[node]) continue;
        for(auto i : adj[node]){
            int n = i.second;
            int w = i.first;
            if(distance[node] + w < distance[n]){
                distance[n] = distance[node] + w;
                q.push({distance[n],n});
            }
        }
    }
    for(int i = 1;i<=n;i++){
        cout << distance[i] << " ";
    }
    return 0;
}