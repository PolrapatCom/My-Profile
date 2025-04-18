#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	getline(cin, word);
	int y = word.length();
	for(int i=0;i<y;i++){
		if(word[i]==' ') continue;
		else if(word[i]>='a'&&word[i]<='z'){
			word[i]-=32;
		}
		else if(word[i]>='A'&&word[i]<='Z'){
			word[i]+=32;
		}
	}
	cout << word;
}
