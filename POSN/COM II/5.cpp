#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>vis(n,0);
    int cnt=0,sum=-1;
    while(cnt<n-1){
        for(int i=1;i<=k;i++){
            sum++;
            while(vis[(sum)%n]==1){
                sum++;
            }
        }
        if(!vis[sum%n]){
            cnt++;
            vis[sum%n]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            cout << i;
            return 0;
        }
    }
    return 0;
}