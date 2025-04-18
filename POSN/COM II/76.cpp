#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,y;
    cin >> n >> y;
    vector<int>x(n,0);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    int l = 0,r = n-1;
    int sum = 0,cnt = 0;
    vector<bool>check(n,false);
    while(l<r){
        int sum = x[l] + x[r]; 
        if(sum <= y){
            check[l] = true;
            check[r] = true;
            l++,r--;
            // while(sum + x[l] <= y && l < r){
            //     check[l] = true;
            //     l++;
            // }
            cnt++;
        }
        else{
            check[r] = true;
            r--;
            cnt++;
        } 
    }
    for(int i=0;i<n;i++){
        if(!check[i]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
// 2 3 7 9