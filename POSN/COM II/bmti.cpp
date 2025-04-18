#include <bits/stdc++.h>
using namespace std;

struct posn{
    string fname,lname,sex,type,nick;
    double point[8];
};

bool comp(pair<double,string>& a,pair<double,string>& b){
    return a.first < b.first;
}

int main(){
    posn data[29];
    double me[8];
    for(int j=0;j<8;j++){
        cin >> me[j];
    }
    for(int i=0;i<29;i++){
        cin >> data[i].fname >> data[i].lname >> data[i].sex;
        for(int j=0;j<8;j++){
            cin >> data[i].point[j];
        }
        cin >> data[i].type >> data[i].nick;
    }
    vector<pair<double,string>>bmti;
    for(int i=0;i<29;i++){
        double temp=0;
        for(int j=0;j<8;j++){
            temp += (data[i].point[j]-me[j])*(data[i].point[j]-me[j]);
        }
        bmti.push_back({sqrt(temp),data[i].nick});
    }
    sort(bmti.begin(),bmti.end(),comp);
    for(int i=0;i<3;i++){
        cout << bmti[i].second << " " << bmti[i].first << endl;
    }
    return 0;
}