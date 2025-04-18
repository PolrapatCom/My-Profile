#include <bits/stdc++.h>
using namespace std;

bool isdirectedgraph(vector<vector<int>>matrix){
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]!=matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}

void makegraph(vector<vector<int>>&matrix){
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
}

int main(){
    int n; cin >> n;
    vector<vector<int>>matrix(n,vector<int>(n,0));
    makegraph(matrix);
    bool check = isdirectedgraph(matrix);
    if(check){
        cout << "directed";
    }
    else{
        cout << "undirected";
    }

    return 0;
}