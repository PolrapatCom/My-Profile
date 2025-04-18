#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,kk;
    cin >> n >> kk;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x,x+n);
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(x[i]+x[j]+x[k]<kk){
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;   
}