#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int y[n];
    for(int i=0;i<n;i++){
        cin >> y[i];
    }
    int maxi = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += y[j];
            if(sum>maxi)maxi=sum;
            if(sum<0)sum=0;
        }
    }
    cout << maxi;
}