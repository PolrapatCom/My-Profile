#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string,pair<int,int>>& a,pair<string,pair<int,int>>& b){
    return a.first.size() < b.first.size();
}

string bfs(string s,int i,int j,int n,int m,vector<vector<int>>& vis,vector<vector<char>>& v){
    vis[i][j] = 1;
    queue<pair<string,pair<int,int>>>q;//,vector<pair<string,pair<int,int>>>,decltype(&comp)>q(&comp);
    q.push({s,{i,j}});
    while(!q.empty()){
        int n1 = q.front().second.first;
        int n2 = q.front().second.second;   
        string temp = q.front().first;
        q.pop();
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};
        for(int i=0;i<4;i++){
            string ans = temp;
            int x = n1 + dx[i];
            int y = n2 + dy[i];
            if(x>=0 && y>=0 && x<n && y<m && (v[x][y] == '.' || v[x][y] == 'B') && !vis[x][y]){   
                vis[x][y] = 1;
                if(i==0) ans+="U";
                else if(i==1) ans+="R";
                else if(i==2) ans+="D";
                else if(i==3) ans+="L";
                if(v[x][y] == 'B'){
                    cout << "YES" << endl << ans.size() << endl;
                    return ans;         
                }
                q.push({ans,{x,y}});
            }
        } 
    }
    return "NO";
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,m,n1,n2;
    cin >> n >> m;
    vector<vector<char>>v(n,vector<char>(m,'#'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
            if(v[i][j]=='A'){
                n1 = i;
                n2 = j;
            }
        }
    }
    string s = "";
    vector<vector<int>>vis(n,vector<int>(m,0));
    cout << bfs(s,n1,n2,n,m,vis,v);
    return 0;
}