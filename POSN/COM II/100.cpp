#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,k; int cnt[100001]={0};
    cin >> n >> k;
    int x[n];
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        cin >> x[i];
        mini = min(mini,x[i]);
        cnt[x[i]]++;
    }
    for(int i = mini;i<1e6+2;i++){
        if(cnt[i]==0){
            k--;
        }
        if(k==0){
            cout << i;
            return 0;   
        }
    }
    return 0;   
}