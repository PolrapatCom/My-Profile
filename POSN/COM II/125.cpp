#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,temp,cnt,x,y;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> n >> m >> temp;
    cin >> x >> y;
    int v[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    queue<pair<int,int>>q;
    temp = v[x][y];
    q.push({x,y});
    v[x][y] = 8;
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        for(int i=0;i<4;i++){
            int r = row + dr[i];
            int c = col + dc[i];
            if(r>=0 && c>=0 && r<n && c<m && v[r][c]==temp){
                v[r][c] = 8;
                q.push({r,c});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }    
    return 0;
}   