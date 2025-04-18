#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,i,j,k,min = 'a',a=0,b=0;
	cin >> x;
	char y[x+1][31]={0},z[x+1][31],swp[31];
	for(i=0;i<x;i++){
		cin >> y[i];
	}
	for(i=0;i<26;i++){
		for(j=0;j<x;j++){
			b=0;
			if(y[i][0]==min){
//				for(k=0;k<a;k++){
//					if(strcmp(y[i],z[k])==0){
//						b=1; break;
//					}	
//				}
				if(b==0){
					strcpy(z[a],y[i]);
					a++;
				}	
			}
		}
		min++;	
	}
	for(i=0;i<a;i++){
		cout << z[i];
	}
}
