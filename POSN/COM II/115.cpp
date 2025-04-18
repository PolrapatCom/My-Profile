#include <bits/stdc++.h>
#define int long long int
using namespace std;

int n,crmx,crmn,mx,mn,sum;

signed main(){
    cin.tie(NULL)->sync_with_stdio(false);
    cin >> n;
    int x[n],sum=0;
    for(int i=0;i<n;i++){
        cin >> x[i];
        sum += x[i];
    }
    crmx=crmn=mx=mn=x[0];
    for(int i=1;i<n;i++){
        crmx = max(crmx + x[i],x[i]);
        mx = max(crmx,mx);
        crmn = min(crmn + x[i],x[i]);
        mn = min(crmn,mn);
    }
    if(mn == sum){
        cout << mx;
        return 0;
    }
    cout << max(mx,sum-mn);
    return 0;
}