#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k,p,mn=INT_MAX,mx=INT_MIN;
    cin >> n >> k >> p;
    long long int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
        mx = max(mx,x[i]);
        mn = min(mn,x[i]);
    }
    while(mn < mx){
        long long int mid = (mn + mx)/2;
        int pass = 0;
        for(int i=0;i<n;i++){
            if(x[i]>mid){
                pass++;
                i = i + p - 1;
            }
        }
        if(pass<=k){
            mx = mid;
        }
        else{
            mn = mid + 1;
        }
    }
    cout << mx;
    return 0;
}