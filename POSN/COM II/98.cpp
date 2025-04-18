#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int maxi = 0;
    for(int i=1;i<1e8;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(x[j]>=i){
                cnt++;
            }
        }
        if(cnt >= i)
        maxi = max(maxi,i);
        if(cnt < i) break;
    }
    cout << maxi;
    return 0;   
}