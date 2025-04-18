#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<vector<int>>vect(n+1,vector<int>(3,0));
    vector<int>distance(n+1,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> vect[i][j];
        }
    }
    for(auto it : vect){
        int u = it[0];
        int v = it[1];
        int dis = it[2];
        if(distance[u] + dis > distance[v]){
            distance[v] = distance[u] + dis;
        }
    }
    int maxi = INT_MIN;
    for(int i=0;i<=n;i++){
        maxi = max(maxi,distance[i]);
    }
    cout << maxi;
    return 0;
}