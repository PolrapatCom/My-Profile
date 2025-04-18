#include <bits/stdc++.h>
using namespace std;

int number(string s,int z){
	int num = 0,y=s.length()-z,a=0;
	while(a!=y){
		num *= 10;
		num += s[a]-'0';
		a++;
	}
	return num;
}

void answer(double x,double y){
	printf("%.3f %.3f",x,y);
	printf("\n%.3f",sqrt(pow(x,2)+pow(y,2)));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; double x=0,y=0,z=0;
	while(true){
		cin >> s;
		int len = s.length();
		if(s[0]=='*'){
			answer(x,y);
			return 0;
		}
		if(s[len-1]=='W'&&s[len-2]=='N'){
			z = number(s,2);
			x-=z/2*sqrt(2),y+=z/2*sqrt(2);
		}
		else if(s[len-1]=='W'&&s[len-2]=='S'){
			z = number(s,2);
			x-=z/2*sqrt(2),y-=z/2*sqrt(2);
		}
		else if(s[len-1]=='E'&&s[len-2]=='N'){
			z = number(s,2);
			x+=z/2*sqrt(2),y+=z/2*sqrt(2);
		}
		else if(s[len-1]=='E'&&s[len-2]=='S'){
			z = number(s,2);
			x+=z/2*sqrt(2),y-=z/2*sqrt(2);
		}
		else if(s[len-1]=='N'){
			z = number(s,1);
			y+=z;
		}
		else if(s[len-1]=='E'){
			z = number(s,1);
			x+=z;
		}
		else if(s[len-1]=='S'){
			z = number(s,1);
			y-=z;
		}
		else if(s[len-1]=='W'){
			z = number(s,1);
			x-=z;
		}
	}
}
//N ??? ???????? 2/root2
//• NE ??? ?????????????????????
//• E ??? ???????????
//• SE ??? ???????????????????
//• S ??? ??????
//• SW ??? ??????????????????
//• W ??? ??????????
//• NW ??? ????????????????????

