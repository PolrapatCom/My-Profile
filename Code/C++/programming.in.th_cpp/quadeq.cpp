#include <bits/stdc++.h>
using namespace std;

int main(){
	int A,B,C,a,b,c,d;
	cin >> A >> B >> C;
	if(pow(B,2)-4*A*C<0){
		cout << "No Solution";
		return 0;
	}
	for(a=1;a<=A;a++){
		if(A%a!=0){continue;}
		for(c=1;c<=A/a;c++){
			if(a*c==A){
				for(b=-abs(C);b<=abs(C);b++){
					if(b==0||C%b!=0){continue;}
					d=C/b;
					if(a*d+b*c==B&&b*d==C){
						printf("%d %d %d %d",a,b,c,d);
						return 0;
					}
				}
			}
		}
	}
	cout << "No Solution";
}
//A = ac, B =ad + bc, C = bd ??? a, b, c, d ????????????? (a, c > 0) 
