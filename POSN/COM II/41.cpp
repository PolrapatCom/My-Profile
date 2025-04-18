#include <bits/stdc++.h>
using namespace std;

void bfs(int i,int j,int n,int m,vector<vector<int>>& vis,vector<vector<char>>& v){
    vis[i][j] = 1;
    queue<pair<int,int>>q;
    q.push({i,j});
    while(!q.empty()){
        int n1 = q.front().first;
        int n2 = q.front().second;
        q.pop();
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};
        for(int i=0;i<4;i++){
            int x = n1 + dx[i];
            int y = n2 + dy[i];
            if(x>=0 && y>=0 && x<n && y<m && v[x][y] == '.' && !vis[x][y]){
                vis[x][y] = 1;
                q.push({x,y});
            }
        } 
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>>v(n,vector<char>(m,'#'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    vector<vector<int>>vis(n,vector<int>(m,0));
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && v[i][j] == '.'){
                cnt++;
                bfs(i,j,n,m,vis,v);
            }
        }
    }
    cout << cnt;
}