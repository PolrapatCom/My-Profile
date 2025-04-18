#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    cin >> s;
    int n = s.length();
    for(int k = 1;k<n;k++){
        int i = 0;
        int j = k;
        string temp = "";
        while(s[i]==s[j] && j<n){
            temp += s[i];
            i++; j++;
        }
        if(j==n){
            cout << temp;
            return 0;
        }
    }
    cout <<  0;

    return 0;   
}