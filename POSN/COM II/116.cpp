#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin >> n;
    int x[n],dp1[n],dp2[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int maxi = 0;
    int temp1 = INT_MIN,temp2 = INT_MIN;
    int cnt1 = 0,cnt2 = 0;
    /*
    1 2 3 1 1 
    1 1 3 2 1 
    5
    */
    // int cnt1 = 1,cnt2 = 1;
    /*
    2 3 4 1 1 
    1 1 4 3 2 
    7
    */
    for(int i=0;i<n;i++){
        if(x[i] > temp1){
            cnt1++;
        }
        else{
            cnt1 = 1;
        }
        temp1 = x[i];
        dp1[i] = cnt1;
    }
    for(int i=n-1;i>=0;i--){
        if(x[i] > temp2){
            cnt2++;
        }
        else{
            cnt2 = 1;
        }
        temp2 = x[i];
        dp2[i] = cnt2;
        if(dp1[i]==1 || dp2[i]==1) continue;
        // maxi = max(maxi,dp1[i] + dp2[i] -2);
        maxi = max(maxi,dp1[i] + dp2[i] - 1);
    }
    // for(int i=0;i<n;i++){
    //     cout << dp1[i] << " ";
    // }
    // cout << "\n";
    // for(int i=0;i<n;i++){
    //     cout << dp2[i] << " ";
    // }
    cout << "\n";
    cout << maxi;
    return 0;
}