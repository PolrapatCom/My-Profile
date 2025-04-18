#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,indexDiff,valueDiff;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);cout.tie(NULL);
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    cin >> indexDiff >> valueDiff;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(i - j) <= indexDiff && abs(x[i] - x[j]) <= valueDiff){
                cout << "Y"; return 0;
            }
        }
    }
    cout << "N";
    return 0;
}   