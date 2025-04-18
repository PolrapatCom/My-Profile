#include <bits/stdc++.h>
#define f first
#define s second
#define int long long int
using namespace std;

const int N = 505;
pair<int,int> shop[N][N];

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,m,q;
    cin >> n >> m >> q;
    for(int i=1;i<=n;i++){
        int temp; cin >> temp;
        for(int j=1;j<=n;j++){
            shop[i][j].first += temp;
            shop[j][i].first += temp;
            shop[i][j].second++;
            shop[j][i].second++;
        }
    }
    for(int i=1;i<=m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        shop[a][b].f = shop[b][a].f = min(shop[a][b].f,c);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int temp = shop[i][k].f + shop[k][j].f;
                if(temp <= shop[i][j].f){
                    shop[i][j].f = temp;
                    shop[i][j].s = shop[i][k].s + shop[k][j].s;
                }
            }
        }
    }
    for(int i=1;i<=q;i++){
        int u,v;
        cin >> u >> v;
        cout << shop[u][v].f << " " << shop[u][v].s << endl;
    }
    return 0;   
}