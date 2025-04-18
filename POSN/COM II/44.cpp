#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<vector<int>>v(n,vector<int>(m,0));
    vector<pair<int,int>>one;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
            if(v[i][j]==1){
                one.push_back({i,j});
            }
        }
    }
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum = 0;
            for(auto it : one){
                sum += abs(it.first - i) + abs(it.second - j);
            }
            mini = min(mini,sum);
        }
    }
    cout << mini;
}