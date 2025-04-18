#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,cnt;
string s;
unordered_map<char,int>mp;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> s;
    n = s.length();
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    cnt = 0;
    for(auto x : mp){
        if(x.second%2==0) continue;
        cnt++;
        if(cnt >1){
            cout << "N";
            return 0;
        }
    }
    cout << "Y";
    return 0;
}   