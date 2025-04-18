#include <bits/stdc++.h>
#define ll long long    
using namespace std;

int mod = 1e9+7;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);   
    int n;
    cin >> n;
    int data[n+1];
    ll sum = 0;
    for(int i=1;i<=n;i++){
        cin >> data[i];
        sum += data[i];
    }
    vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
    dp[0][0] = true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            dp[i][j] = dp[i-1][j];
            if(j-data[i] >= 0 && dp[i-1][j-data[i]]){
                dp[i][j] = true;    
            }
        }
    }
    vector<ll>ans;
    for(int i = 1;i<=sum;i++){
        if(dp[n][i]){
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for(auto i : ans){
        cout << i << " ";
    }
    return 0;
}