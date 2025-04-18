#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int maxi = 0;
    for(int i=0;i<n;i++){
        int mini = x[i];
        for(int j=i+1;j<n;j++){
            mini = min(mini,x[j]);  
            maxi = max(maxi,(j-i+1)*(mini));
        }
    }
    cout << maxi;
}