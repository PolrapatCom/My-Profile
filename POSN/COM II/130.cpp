#include <bits/stdc++.h>
using namespace std;

int r,b,g,n,ans2;

void f(int r,int b,int g,int prev,int n){
    if(n==0){
        ans2++;
    }
    if(r>0 && prev!=0){
        f(r-1,b,g,0,n-1);
    }
    if(b>0 && prev!=1){
        f(r,b-1,g,1,n-1);
    }
    if(g>0 && prev!=2){
        f(r,b,g-1,2,n-1);
    }
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> r >> b >> g;
    n = r + b + g;
    f(r,b,g,-1,n);
    cout << ans2;
    return 0;
}