#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>human(n,0);
    for(int i=0;i<n;i++){
        cin >> human[i];
    }
    vector<int>apartment(m,0);
    for(int i=0;i<m;i++){
        cin >> apartment[i];
    }
    sort(human.begin(),human.end());
    sort(apartment.begin(),apartment.end());
    int cnt = 0;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(abs(human[i] - apartment[j]) <= k){
            i++,j++,cnt++; 
        }
        else if(human[i] - apartment[j] > k){
            j++;
        }
        else{
            i++;
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(human[i]-k <= apartment[j] && human[i] + k >= apartment[j]){
    //             // apartment.erase(apartment.begin()+j);
    //             cnt ++;
    //             apartment[j] = INT_MIN;
    //         }
    //         else if(apartment[j] > human[i] + k){
    //             continue;
    //         }
    //     }
    // }
    cout << cnt;
    return 0;
    // 45 60 60 80
    // 30 60 75
}