#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i] < x[j]){
                cout << j-i << " ";
                break;
            }
            if(j==n-1){
                cout << 0 << " ";
            }
        }
    }cout << 0 << " ";
    return 0;
}