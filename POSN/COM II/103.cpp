#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    priority_queue<int>q;
    int n = 3 ;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        q.push(x);
    }
    int cnt = 0;
    while(!q.empty()){
        int u = q.top();
        q.pop();
        if(q.empty()){
            cout << cnt;
            return 0;
        }
        int v = q.top();
        q.pop();
        u--,v--;
        cnt++;
        if(u!=0) q.push(u);
        if(v!=0) q.push(v);
    }
    cout << cnt;
    return 0;   
}