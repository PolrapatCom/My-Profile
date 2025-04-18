//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        
        for(int i=0;i<s.length();i++){
            if(s[0]=='-') continue;
            if(!(s[i]>='0'&&s[i]<='9')) return -1;
        }
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[0]=='-') {
                if(s[i]=='-') continue;
                 ans=ans*10-s[i]+'0';
            }
            else {
                ans = ans*10+s[i]-'0';
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
