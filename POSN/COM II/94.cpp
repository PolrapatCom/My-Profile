#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&a ,pair<int,int>&b){
    int suma = a.first + a.second;
    int sumb = b.first + b.second;
    if(suma < sumb) return true;
    else if(suma > sumb) return false;
    return a.first < b.first;   
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int k,n,m;
    cin >> k >> n >> m;
    int x[n],y[m];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    for(int i=0;i<m;i++){
        cin >> y[i];
    }
    sort(x,x+n);
    sort(y,y+m);
    int l = 0,r = 0;
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans.push_back({x[i],y[j]});
        }
    }
    sort(ans.begin(),ans.end(),comp);
    int z = ans.size();
    for(int i=0;i<k-1;i++){
        cout << ans[i].first << " "  << ans[i].second << " ";
    }
    for(int i=k-1;i<k;i++){
        cout << ans[i].first << " "   << ans[i].second;
    }

    return 0;   
}