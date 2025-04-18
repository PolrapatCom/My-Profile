#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    string s1,s2;
    cin >> s1 >> s2;
    vector<int>v1,v2;
    for(int i=0;i<n;i++){
        if(s[i]==s1){
            v1.push_back(i);
        }
        else if(s[i]==s2){
            v2.push_back(i);
        }
    }
    int n2 = v1.size();
    int m = v2.size();
    int mini = INT_MAX;
    for(int i=0;i<n2;i++){
        for(int j=0;j<m;j++){
            mini = min(mini,abs(v1[i]-v2[j]));
        }
    }
    cout << mini;
    return 0;   
}