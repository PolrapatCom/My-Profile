#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n = 3;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x,x+n);
    int cnt = 0;
    while(x[0]!=0 && x[1]!= 0 && x[2]!=0){
        x[2]--;
        x[1]--;
        cnt ++;
        sort(x,x+n);
    }
    int cnt0 = 0;
    for(int i=0;i<n;i++){
        if(x[i]==0)
        cnt0++;
    }
    if(cnt0 >= 2){
        cout << cnt;
        return 0;
    }
    if(x[0]==0){
        cnt += min(x[1],x[2]);
    }
    else if(x[1]==0){
        cnt += min(x[0],x[2]);
    }
    else{
        cnt += min(x[0],x[1]);
    }
    cout << cnt;
    return 0;   
}