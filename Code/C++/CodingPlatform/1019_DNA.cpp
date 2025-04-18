#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2; int max=0,cnt=0,a;
	cin >> s1 >> s2;
	int len1 = s1.length(),len2 = s2.length();
	if(len2>len1){
		for(int i=0;s1[i]!='\0';i++){
			for(int j=0;s2[j]!='\0';j++){
				if(s1[j]==s2[i+j]){
					cnt++;
				}
				else if(s1[j]!=s2[i+j]){
					if(cnt>max) {
						max=cnt;
						a=j;
					}
					cnt=0;
				}
			}
		}
		for(int i=a-max;i<a;i++){
			cout << s1[i];
		}
	}
	else{
		for(int i=0;s2[i]!='\0';i++){
			for(int j=0;s1[j]!='\0';j++){
				if(s2[j]==s1[i+j]){
					cnt++;
				}
				else if(s2[j]!=s1[i+j]){
					if(cnt>max) {
						max=cnt;
						a=j;
					}
					cnt=0;
				}
			}
		}
		for(int i=a-max;i<a;i++){
			cout << s2[i];
		}
	}
	//cout << max;
}
