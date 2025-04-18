#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>& a,pair<int,int>& b){
    if(a.first > b.first) return true;
    else if(a.first < b.first) return false;
    return b.first < b.second;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int k,w,n;
    cin >> k >> w >> n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    for(int i=0;i<n;i++){
        cin >> y[i];
    }
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({x[i],y[i]});
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            if(v[j].second <= w){   
                w += v[j].first;
                v[j].second = INT_MAX;
                break;
            }
        }
    }
    cout << w;
    return 0;   
}