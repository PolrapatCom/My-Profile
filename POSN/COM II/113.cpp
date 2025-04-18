#include <bits/stdc++.h>
using namespace std;

int n,m,q,temp,temp2,temp3,ans=1e8;
vector<int> line[1000009];
vector<vector<int>>v(505,vector<int>(505,1e8));

int main(){
    cin.tie(0)->sync_with_stdio(false);
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        cin >> temp;
        for(int j=1;j<=temp;j++){
            cin >> temp2;
            line[temp2].push_back(i);
        }
        v[i][i] = 0;
    }
    for(int i=1;i<=n;i++){
        for(auto n1 : line[i]){
            for(auto n2 : line[i]){
                if(n1 != n2){
                    v[n1][n2] = 1;
                }
            }
        }
    }
    for(int k=1;k<=m;k++){
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m;j++){
                v[i][j] = min(v[i][j] , (v[i][k] + v[k][j]));
            }
        }
    }
    cin >> q;
    for(int i=1;i<=q;i++){
        ans = 1e8;
        cin >> temp2 >> temp3;
        for(auto n1 : line[temp2]){
            for(auto n2 : line[temp3]){
                ans = min(ans,v[n1][n2]);
            }
        } 
        ans == 1e8 ? cout << "impossible" : cout << ans; 
        cout << endl;
    }
}