#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,a=1,b=2,c=3,d=5,e=4,f=6;
	cin >> x;
	string s;
	while(x){
		cin >> s;
		int y=s.length();
		a=1,b=2,c=3,d=5,e=4,f=6;
		for(int i=0;i<y;i++){
			if(s[i]=='F'){
				int swp=b;
				b=a;
				a=d;
				d=f;
				f=swp;
			}
			else if(s[i]=='B'){
				int swp=a;
				a=b;
				b=f;
				f=d;
				d=swp;
			}
			else if(s[i]=='L'){
				int swp=a;
				a=e;
				e=f;
				f=c;
				c=swp;
				
			}
			else if(s[i]=='R'){
				int swp=a;
				a=c;
				c=f;
				f=e;
				e=swp;
			}
			else if(s[i]=='C'){
				int swp=b;
				b=e;
				e=d;
				d=c;
				c=swp;
			}
			else if(s[i]=='D'){
				int swp=b;
				b=c;
				c=d;
				d=e;
				e=swp;
			}
		}
		x--; cout << b << " ";
	}
}
//"B","C","D","F","L","R" 
