#include <bits/stdc++.h>
using namespace std;

int n,m;
int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    int x[n][m];
    bool vis[n][m]={0};
    memset(vis, false, sizeof(vis));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> x[i][j];
        }
    }
    priority_queue<tuple<int,int,int>>q;
    q.push({x[0][0],0,0});
    vis[0][0] = 1;
    while(!q.empty()){
        auto it = q.top();
        q.pop();
        int w = get<0>(it);
        int row = get<1>(it);
        int col = get<2>(it);

        if(row == n-1 && col == m-1){
            cout << w;
            return 0;
        }
        for(int i=0;i<4;i++){
            int r = dr[i] + row;
            int c = dc[i] + col;
            if(r>=0 && c>=0 && r<n && c<m && !vis[r][c]){
                vis[r][c] = 1;
                q.push({min(x[r][c],w),r,c});
            }
        }
    }
}