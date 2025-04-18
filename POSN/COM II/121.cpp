#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int>pa,soldier;
int n,m,a,b;

int fp(int n){
    if(pa[n]==n) return n;
    return pa[n] = fp(pa[n]);
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> n >> m;
    pa.resize(n+1);
    soldier.resize(n+1);
    for(int i=1;i<=n;i++){
        cin >> soldier[i];
        pa[i] = i;
    }
    for(int i=1;i<=m;i++){
        cin >> a >> b;
        int u = fp(a);
        int v = fp(b);
        if(u==v){
            cout << "-1\n";
            continue;
        }
        if(soldier[u] > soldier[v]){
            soldier[u] += soldier[v]/2;
            pa[v] = u;
            cout << u << "\n";
        }
        else if(soldier[u] < soldier[v]){
            soldier[v] += soldier[u]/2;
            pa[u] = v;
            cout << v << "\n";
        }
        else{
            if(a<b){
                soldier[u] += soldier[v]/2;
                pa[v] = u;
                cout << u << "\n";
            }
            else{
                soldier[v] += soldier[u]/2;
                pa[u] = v;
                cout << v << "\n";
            }
        }
    }
    return 0;
}