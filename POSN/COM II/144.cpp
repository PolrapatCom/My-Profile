#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[905][905];
bool vis[905][905];
int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};

int main(){
    queue<pair<int,int>>q;
    queue<tuple<int,int,int>>q2;
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
            if(arr[i][j]==0){
                q.push({i,j});
            }
            vis[i][j] = false;
        }
    }
    while(!q.empty()){
        auto it = q.front();
        int row = it.first;
        int col = it.second;
        q.pop();
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int r = row + i;
                int c = col + j;
                if(r>=0 && c>=0 && r<n && c<m){
                    arr[r][c]=0;
                }
            }
        }
    }
    for(int k=0;k<n;k++){
        if(arr[k][0]==1){
            q2.push({0,k,0});
        }
    }
    while(!q2.empty()){
        auto it = q2.front();
        int step = get<0>(it);
        int row = get<1>(it);
        int col = get<2>(it);
        q2.pop();
        if(col == m-1){
            cout << step;
            return 0;
        }   
        for(int i=0;i<4;i++){
            int r = row + dr[i];
            int c = col + dc[i];
            if(r>=0 && c>=0 && r<n && c<m && !vis[r][c] && arr[r][c]==1){
                vis[r][c] = true;
                q2.push({step+1,r,c});
            }
        }
    }

    cout << "No route";
    return 0;   
}