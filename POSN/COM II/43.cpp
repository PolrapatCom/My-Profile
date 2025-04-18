#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    while(true){
        vector<int>v(26,0);
        string temp = "";
        int n = s.length();
        for(int i=0;i<n;i++){
            if(v[s[i]-'a']>0){
                temp += s[i];
            }
            v[s[i]-'a']++;
        }
        if(temp.length() == 0){
            cout << s;
            return 0;
        }
        s = temp;
    }
    return 0;
}