#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef tuple<ll,ll,ll> node;
const int maxN = 2e5 + 5;

int n,m,a,b,c;
ll distanc[2][maxN];
vector<pair<ll,ll>> G[maxN];
priority_queue<node,vector<node>,greater<node>>q;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> n >> m;
    for(int i =0;i<m;i++){
        cin >> a >> b >> c;
        G[a].push_back({b,c});
    }
    distanc[0][1] = distanc[1][1] = 0;
    q.push({0,1,1});
    while(!q.empty()){
        auto it = q.top();
        q.pop();
        int w = get<0>(it);
        int u = get<1>(it);
        int coupon = get<2>(it);

        if(distanc[!coupon][u] < w)  continue;


        for(auto itr : G[u]){
            int u2 = itr.first;
            int w2 = itr.second;
            if(coupon){
                if(w + w2 < distanc[0][u2]){
                    distanc[0][u2] = w + w2;
                    q.push({w+w2,u2,1});
                }
                if(w + w2/2 < distanc[1][u2]){
                    distanc[1][u2] = w + w2/2;
                    q.push({w+w2/2,u2,0});
                }
            }
            else{
                if(w + w2 < distanc[1][u2]){
                    distanc[1][u2] = w + w2;
                    q.push({w+w2,u2,0});
                }
            }
        }
    }
    cout << min(distanc[0][n],distanc[1][n]);
}