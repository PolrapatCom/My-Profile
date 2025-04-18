#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,a,cnt;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> n;
    ll v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                cnt++;
            }
        }
        cout << cnt << " ";
    }
    return 0;
}   