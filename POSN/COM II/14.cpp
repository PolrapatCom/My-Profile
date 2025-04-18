/* Template code */
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <ctime>
using namespace std;
// Not use unordered_map
int firstUniqueChar1(string s)
{   
    int check = 0;
    int ch[26]={0};
    int n = s.size();
    for(int i=0;i<n;i++){
        ch[s[i]-'a']++;
        if(ch[s[i]-'a']==2){
            check = 1;
        }
    }
    if(check==0){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(ch[s[i]-'a']==1){
            return i;
        }
    }
    return -1;
}
// Use unordered_map
int firstUniqueChar2(string s)
{
    unordered_map<char,int>mp;
    int n = s.size();
    int check = 0;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]==2){
            check = 1;
        }
    }
    if(check==0){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(mp[s[i]]==1){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<string> words = {
        "alligator", "abcabc", "apricot", "blackberry",
        "blueberry", "cherry", "chipmunk", "chimpanzee",
        "coconut", "crocodile", "elephant",
        "giraffe", "gorilla", "iguana", "jaguar",
        "kangaroo", "lemur", "melon", "mongoose", "ocelot",
        "orangutan", "pear", "pineapple", "platypus",
        "plum", "raspberry", "rhinoceros", "squirrel"};
    srand(time(0));
    for (const string &input : words)
    {
        cout << left << setw(14) << input
             << "\t" << firstUniqueChar1(input)
             << "\t" << firstUniqueChar2(input)
             << endl;
    }
    return 0;
}