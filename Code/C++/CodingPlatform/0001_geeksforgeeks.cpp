//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {   string str3=str1;
        if(str1.length()!=str2.length()) return false;
        int len = str1.length();
        char ch=str1[0];
        for(int i=0;i<len-1;i++){
            str1[i]=str1[i+1];
        }
        str1[len-1]=ch;
        if(str1==str2) return true;
        ch=str1[0];
        for(int i=0;i<len-1;i++){
            str1[i]=str1[i+1];
        }
        str1[len-1]=ch;
        if(str1==str2) return true;
        ch=str3[len-1];
        for(int i=len-1;i>0;i++){
            str3[i]=str3[i-1];//error
        }
        str3[0]=ch;
        if(str3==str2) return true;
        ch=str3[len-1];
        for(int i=len-1;i>0;i++){
            str3[i]=str3[i-1];//error
        }
        str3[0]=ch;
        if(str3==str2) return true;
        return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t=2;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
