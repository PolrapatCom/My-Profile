#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string,int>& a,pair<string,int>& b){
    if(a.second > b.second) return true;
    if(a.second < b.second) return false;
    return a.first < b.first;
}

int main(){
    int x;
    cin >> x;
    cin.ignore();
    unordered_map<string,int>mp;
    string s;
    getline(cin,s);
    s += " ";
    int n = s.length();
    string sub = "";
    for(int i=0;i<n;i++){
        
        if(s[i]==' '){
            mp[sub]++;
            sub = "";
        }
        if(s[i]!=' '){
            sub += s[i];
        }
    }
    vector<pair<string,int>>v;
    for(auto it : mp){
        v.push_back({it.first,it.second});
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<x;i++){
        cout << v[i].first << " " << v[i].second << " " ;
    }
}