 #include <bits/stdc++.h>
 
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    if(n!=m){
        cout << "false";
        return 0;
    }
    int check=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            check++;
        }
        if(check>=3){
            cout << "false";
            return 0;
        }
    }
    cout << "true"; 
}