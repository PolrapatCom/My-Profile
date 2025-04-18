#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin >> n >> q;
    long long int x[n],qs[n]={0};
    for(int i=0;i<n;i++){
        cin >> x[i];
        if(i>0){
            qs[i] = qs[i-1] + x[i];
        }
        else{
            qs[0] = x[0];   
        }
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin >> a >> b;
        long long int ans = 0;
        ans += qs[b-1];
        if(a>1){
            ans-=qs[a-2];
        }
        cout << ans << endl;
    }

    return 0;
}