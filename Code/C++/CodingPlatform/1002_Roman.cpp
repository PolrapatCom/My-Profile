#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,y,i=0,v=0,x=0,l=0,c=0;
	cin >> a;
	while(a>=1){
		y=a;
		while(y>=100){
			c++;
			y-=100;
		}
		while(y>=50){
			if(y>=90){
				c++; x++;
				y-=90;
			}
			else{
				l++;
				y-=50;
			}
		}
		while(y>=10){
			if(y>=40){
				l++; x++;
				y-=40;
			}
			else{
				x++;
				y-=10;
			}
		}
		while(y>=5){
			if(y>=9){
				i++; x++;
				y-=9;
			}
			else{
				v++;
				y-=5;
			}
		}
		while(y>=1){
			if(y>=4){
				i++; v++;
				y-=4;
			}
			else{
				i++;
				y-=1;
			}
		}
		a--;
	}
	printf("%d %d %d %d %d",i,v,x,l,c);
}
