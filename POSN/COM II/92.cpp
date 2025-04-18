#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int mini = x[0];
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        mini = min(mini,x[i]);
        maxi = max(maxi,(x[i]-mini));
    }
    cout << maxi;

    return 0;   
}