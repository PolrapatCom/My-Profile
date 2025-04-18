#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ans,cnt;
string s;
int mod = 1e9 + 7;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> s; 
    ans=0,cnt=0;
    int n = s.length();
    vector<ll>dp;
    dp.push_back(0);
    for(int i=1;i<=n;i++){
        dp.push_back(dp[i-1]+i);
    }
    // for(auto it : dp){
    //     cout << it << " ";
    // }
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
        else if(s[i]=='0'){
            ans += dp[cnt];
            cnt = 0;
        }
    }
    ans += dp[cnt];
    cout << ans;
    return 0;
}   