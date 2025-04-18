#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector<vector<int>>road(n,vector<int>(m,0));
    vector<vector<int>>money(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> road[i][j];
        }
    }
    vector<int>row2(n,0);
    vector<int>col2(m,0);
    vector<int>row1(n,0);
    vector<int>col1(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> money[i][j];
            money[i][j] += road[i][j];
            row2[i] += money[i][j];
            row1[i] += road[i][j];
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            col2[j] += money[i][j];
            col1[j] += road[i][j];
        }
    }
    vector<int>dprow(n,0);
    vector<int>dpcol(m,0);
    int maxi = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(i==j-1 || i==j+1){
                dprow[i] += row2[j];
                continue;
            }
            dprow[i] += row1[j];
        }
        maxi = max(maxi,dprow[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                continue;
            }
            if(i==j-1 || i==j+1){
                dpcol[i] += col2[j];
                continue;
            }
            dpcol[i] += col1[j];
        }
        maxi = max(maxi,dpcol[i]);
    }
    cout << maxi;
    return 0;
}