#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    vector<int>data;
    for(int i=0;i<x;i++){
        int y; cin >> y;
        data.push_back(y);
    }
    sort(data.begin(),data.end());
    int maxi = 0;
    for(int i=1;i<x;i++){
        maxi = max(maxi,data[i]-data[i-1]);
    }
    cout << maxi;
}