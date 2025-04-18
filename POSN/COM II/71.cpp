#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    long long n;
    cin >> n;
    map<long long,long long>mp;
    for(long long i=0;i<n;i++){
        long long temp;
        cin >> temp;
        mp[temp]++;
    }
    // long long cnt = 0;
    // for(int i=0;i<n;i++){
    //     if(mp[x[i]]>0){
    //         mp[x[i]] = 0;
    //         cnt++;
    //     }
    // }
    cout << mp.size();
    return 0;
}