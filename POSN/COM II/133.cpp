#include <bits/stdc++.h>
using namespace std;

int n,cnt,ans,diff,preved;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    ans = 1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cnt = 2;
            diff = x[j]-x[i];
            preved = x[j];
            for(int k=j+1;k<n;k++){
                if(x[k]-preved==diff){
                    cnt++;
                    preved = x[k];
                }
            }
            ans = max(ans,cnt);
        }
    }
    cout << ans;
    return 0;
} 