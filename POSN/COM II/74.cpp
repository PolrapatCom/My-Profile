#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long x;
    cin >> x;
    cout << x;
    while(x!=1){
        if(x%2==0){
            x=x/2;
        }
        else{
            x=x*3+1;
        }
        cout << " " << x;
    }

    return 0;
}