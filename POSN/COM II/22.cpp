#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> x(n),y(n);
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    int maxi = 1,cnt = 1,cnt2 = 1;
    for(int i=0;i<n;i++){
        cnt=1,cnt2=1;
        for(int j=i+1;j<n;j++){
            if(x[i]==x[j]){
                cnt++;
                maxi = max(maxi,cnt);
            }
            if(y[i]==y[j]){
                cnt2++;
                maxi = max(maxi,cnt2);
            }
        }
    }
    for(int i=1;i<n;i++){ 
        for(int k=i;k<n;k++){
            double m = 1;
            if(x[k]-x[k-1]!=0){
                m = (double)(y[k]-y[k-1])/(x[k]-x[k-1]);
            }
            else{
                continue;
            }
            for(int j=1;j<n;j++){
                cnt = 1;
                if(x[i]-x[i-1]!=0){
                    if((double)(y[j]-y[j-1])/(x[j]-x[j-1])==m){
                    cnt++;
                    }
                }
                else{
                    continue;
                }
                maxi = max(maxi,cnt);
            }
        }
        
    }
    cout << maxi;
}