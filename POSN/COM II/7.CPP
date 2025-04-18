#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int z[y];
    for(int i=0;i<y;i++){
        cin >> z[i];
    }
    for(int i=y-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(z[i]+z[j]==x){
                cout << i+1 << " " << j+1;
                return 0;
            }
        }
    }
    cout << "-1 -1";
}