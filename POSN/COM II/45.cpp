#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,x,y;
    cin >> m >> x >> y;
    vector<vector<int>>v(m,vector<int>(m,0));
    vector<vector<int>>vis(m,vector<int>(m,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    queue<pair<int,int>>q;
    q.push({y-1,x-1});
    int maxi = INT_MIN;
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();    
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};
        for(int k=0;k<4;k++){
            int n1 = i + dy[k];
            int n2 = j + dx[k];
            if(n1 >= 0 && n2 >= 0 && n1 < m && n2 < m && v[n1][n2] !=100 && v[n1][n2] > v[i][j] && !vis[n1][n2]){
                vis[n1][n2] = 1;
                maxi = max(maxi,v[n1][n2]);     
                q.push({n1,n2});
            }
        }
    }
    maxi == INT_MIN  ? cout << v[y-1][x-1] : cout << maxi;
    return 0;
}