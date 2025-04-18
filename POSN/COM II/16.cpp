#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i] < x[(j+i)%n]){
                cout << x[(j+i)%n] << " ";
                break;
            }
            if(j==n-1){
                cout << "-1" << " ";
            }
        }
    }
}