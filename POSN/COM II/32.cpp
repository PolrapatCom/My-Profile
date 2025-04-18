#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    vector<int>dp(n,1);
    vector<int>hash(n,1);
    int maxi =1;
    for(int i=0;i<n;i++){
        hash[i]=i;
        for(int prev = 0;prev<i;prev++){
            if(x[i] > x[prev] && dp[i] < dp[prev] + 1){
                dp[i] = dp[prev] + 1;
                hash[i] = prev;
            }
        }
        maxi = max(maxi,dp[i]);
    }
    int idk = -1;
    int lastidx = -1;
    for(int i=0;i<n;i++){
        if(dp[i]>idk){
            idk = dp[i];
            lastidx = i;
        }
    }
    vector<int>temp;
    temp.push_back(x[lastidx]);
    while(lastidx!=hash[lastidx]){
        lastidx = hash[lastidx];
        temp.push_back(x[lastidx]);
    }
    reverse(temp.begin(),temp.end());
    cout << maxi << endl;
    for(auto it : temp){
        cout << it << " ";
    }
}