#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
    string s;
    cin >> s;
    int n = s.length();
    int i=0;
    while(i<n){
        if(s[i]=='('||s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'||s[i]==']'){
            if(st.empty()){
                cout << "NOT balanced";
                return 0;
            }  
            char temp = st.top();
            st.pop();
            if(st.empty()){
                cout << "NOT balanced";
                return 0;
            }            
            if(temp == ')' && st.top()!='('){
                cout << "NOT balanced";
                return 0;
            }
            if(temp == ']' && st.top()!='['){
                cout << "NOT balanced";
                return 0;
            }
            st.pop();
        
      
        }
        i++;    
    }      
    if(!st.empty()){
        cout << "NOT balanced";
                return 0;
    }
    cout << "balanced";
    return 0;
}


//     char temp = st.top();
        //     st.pop();
        //     if(st.empty()){
        //         cout << "NOT balanced";
        //         return 0;
        //     }
        //     if(st.top() < '0' || st.top() > '9'){
        //         cout << "NOT balanced";
        //         return 0;
        //     }
        //     st.pop();
        //     if(st.empty()){
        //         cout << "NOT balanced";
        //         return 0;
        //     }
        //     if(st.top() == '+' || st.top() == '-' ||st.top() == '*' ||st.top() == '/' ){
        //         //nothing
        //     }
        //     else{
        //         cout << "NOT balanced";
        //         return 0;
        //     }
        //     st.pop();
        //     if(st.empty()){
        //         cout << "NOT balanced";
        //         return 0;
        //     }
        //     if(st.top() < '0' || st.top() > '9'){
        //         cout << "NOT balanced";
        //         return 0;
        //     }
        //     st.pop();
        //     if(st.empty()){
        //         cout << "NOT balanced";
        //         return 0;
        //     }