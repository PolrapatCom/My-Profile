//failed
#include <bits/stdc++.h>
using namespace std;

int n,m,mini;

int main(){
    cin >> n >> m;
    int data[m][3];
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            cin >> data[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int temp = data[i][2];
        data[i][2] /=2;
        vector<pair<int,int>>adj[n+1];
        vector<long long>distance(n+1,1e8);
        for(j=0;j<m;j++){
            int u = data[j][0];
            int v = data[j][1];
            int w = data[j][2];
        }
    }
}