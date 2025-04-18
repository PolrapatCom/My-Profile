#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

bool vowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
    }
    return false;
}

string reverseVowels(string s) {
    int n = s.length();
    int left = 0;
    int right = n-1;
    int reverse = 1;
    while(left < right){
        if(reverse){
            if(vowel(s[left])){
                reverse = 0;
            }
            left++;  
        }
        else{
            if(vowel(s[right])){
                char ch = s[left-1];
                s[left-1] = s[right];
                s[right] = ch;
                reverse = 1;
            }
            right--;
        }
    }
    return s;
}

int main() {
vector<string> words = {
"apple", "banana", "basketball", "biology", "bird",
"boat", "bright", "burger", "calm", "chaotic",
"chemistry", "chocolate", "clean", "coffee", "complex",
"computer", "courageous", "deep", "dusty", "drawing",
"enthusiasm", "incredible", "experience", "fortunate",
"fascinating", "juxtapose", "beautiful", "basketball", "creativity",
"discovery", "effortless", "fascinated", "generation", "harmonious",
"illuminate", "juxtapose", "knowledge", "magnificent", "opportunity",
"personality", "quintessence", "reverence", "spectacular",
"transcendence", "understand", "vocabulary"
};
for (const string& input : words) {
cout << input << "\t" << reverseVowels(input);
cout << endl;
}
return 0;
}