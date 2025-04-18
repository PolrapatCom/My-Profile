#include <bits/stdc++.h>
using namespace std;

int n,ladder,snake,a,b;
int board[10005];
bool vis[10005];
unordered_map<int,int>mp;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n >> ladder >> snake;
    for(int i=0;i<ladder+snake;i++){
        cin >> a >> b;
        mp[a] = b;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;    
    q.push({0,1});
    while(!q.empty()){
        auto it = q.top();
        q.pop();
        int step = it.first;
        int lo = it.second;
        if(lo==n){
            cout << step;
            return 0;
        }
        for(int i=1;i<=6;i++){
            int newlo = lo + i;
            if(vis[newlo]) continue;
            if(mp.find(newlo) != mp.end()){
                q.push({step+1,mp[newlo]});
                vis[mp[newlo]]=1;
            }
            else{
                q.push({step+1,newlo});
                vis[newlo] = 1;
            }
        }
    }
}