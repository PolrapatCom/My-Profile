#include <bits/stdc++.h>
using namespace std;

int n,m,k;
string x[100][100],s;
vector<pair<int,int>>adj[26];
int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};
char temp;
set<string>st;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    
    cin >> n >> m >> k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> temp;
            x[i][j] = temp;
            adj[temp-'A'].push_back({i,j});
        }
    }
    for(int i=0;i<k;i++){
        queue<tuple<int,int,int>>q;
        cin >> s; int len = s.length();
        // bool vis[n][m];
        // memset(vis,false,sizeof(vis));
        for(int j=0;j<len-1;j++){
            for(auto it : adj[s[j]-'A']){
                int u = it.first;
                int v = it.second;
                q.push({j,u,v});
            }
            while(!q.empty()){
                auto it = q.front();
                int idx = get<0>(it);
                int row = get<1>(it);
                int col = get<2>(it);
                q.pop();
                if(x[row][col][0]==s[len-1] && idx==len-1){
                    st.insert(s);
                    break;
                } 
                for(int i1=-1;i1<=1;i1++){
                    for(int j1=-1;j1<=1;j1++){
                        int r = row + i1;
                        int c = col + j1;
                        if(r>=0 && c>=0 && r<n && c<m){
                            if(x[r][c][0] == s[idx+1]){
                                // vis[r][c]=1;
                                q.push({idx+1,r,c});
                            }
                        }
                    }
                } 
            }
        }
    }
    for(auto it : st){
        cout << it << " ";
    }
    return 0;
}