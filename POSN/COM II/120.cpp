#include <bits/stdc++.h>
using namespace std;

vector<int>pa,sized;
int n,m,a,b,cnt1,cnt2;
int fp(int n){
    if(pa[n]==n) return n;
    return pa[n] = fp(pa[n]);
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> n >> m;
    pa.resize(n+1);
    sized.resize(n+1);
    for(int i=1;i<=n;i++){
        pa[i]=i;
        sized[i]=1;
    }
    cnt1 = n,cnt2 = 1;;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        int u = fp(a);
        int v = fp(b);
        if(u!=v){
            pa[u] = v;
            sized[v] += sized[u];
            cnt1--;
            cnt2 = max(cnt2,sized[v]);
        }
        cout << cnt1 << " " << cnt2 << endl;
    }
    return 0;
}