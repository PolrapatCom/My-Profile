#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int n = s.length();
    int cnt = 1;
    int maxi = 1;
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            cnt ++ ;
            maxi = max(maxi,cnt);
        }
        else{
            maxi = max(maxi,cnt);
            cnt=1;
        }
    }
    cout << maxi;

    return 0;
}