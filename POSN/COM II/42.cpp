#include <bits/stdc++.h>
using namespace std;

int bfs(int i,int j,int n,int m,int one,vector<vector<int>> vis,vector<vector<int>> v){
    vis[i][j] = 1;
    if(v[i][j]==1) one--;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
    q.push({0,{i,j}});
    int sum = 0;
    while(!q.empty()){
        int n1 = q.top().second.first;
        int n2 = q.top().second.second;
        int step = q.top().first;
        q.pop();
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};
        for(int i=0;i<4;i++){
            int x = n1 + dx[i];
            int y = n2 + dy[i];
            int walk = step + 1;
            if(x>=0 && y>=0 && x<n && y<m && !vis[x][y]){
                q.push({walk,{x,y}});
                vis[x][y]=1;
                if(v[x][y]==1){
                    one--;
                    sum += walk;
                    if(one==0){
                        return sum;
                    }
                    v[x][y] = 0;
                }
            }
        } 
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    int one = 0;
    vector<vector<int>>v(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
            if(v[i][j]==1) one++;
        }
    }
    vector<vector<int>>vis(n,vector<int>(m,0));
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mini = min(mini,bfs(i,j,n,m,one,vis,v));
        }
    }
    cout << mini;
}