#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string,int>& a,pair<string,int>& b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string s;
    map<string,int>mp;
    while(cin >> s){
        mp[s]++;
    }
    vector<pair<string,int>>v;
    for(auto it : mp){
        v.push_back(it);
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<n;i++){
        cout << v[i].first << " " << v[i].second << " ";
    }
}