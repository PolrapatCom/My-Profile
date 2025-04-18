#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool comp(tuple<ll,ll,ll>&a,tuple<ll,ll,ll>&b){
    int kdj1 = get<0>(a);
    int kdj2 = get<0>(b);
    return kdj1 > kdj2;
}

ll m,n,a,b,c,ans;
vector<ll>pa;
vector<tuple<ll,ll,ll>>v;

int fp(int n){
    if(pa[n]==n) return n;
    return pa[n] = fp(pa[n]);
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> n >> m;
    pa.resize(n+1);
    for(int i=1;i<=m;i++){
        cin >> a >> b >> c;
        v.push_back({c,a,b});
    }
    for(int i=1;i<=n;i++) pa[i]=i;
    sort(v.begin(),v.end(),comp);
    ans = 0;
    for(auto it : v){
        ll dis = get<0>(it),x = get<1>(it),y = get<2>(it);
        int n1 = fp(x);
        int n2 = fp(y);
        if(n1!=n2){
            ans += dis - 1;
            pa[n1] = n2;
        }
    }
    cout << ans;
    return 0;
}