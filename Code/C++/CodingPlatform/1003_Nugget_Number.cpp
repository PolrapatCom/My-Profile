#include <bits/stdc++.h>
#define a 6
#define b 9
#define c 20
using namespace std;

int main(){
	int x[10000]={},y=0,z,d=0;
	cin >> z;
	for(int i=0;i<=100/6;i++){
		for(int j=0;j<=100/9;j++){
			for(int k=0;k<=100/20;k++){
				int result = a*i+b*j+k*c;
				if(result>0&&result<=100){
					x[y]=result;
					y++;
				}
			}
		}
	}
	for(int i=0;i<y;i++){
		for(int j=i;j<y;j++){
			if(x[i]>x[j]){
				int swap = x[i];
				x[i] = x[j];
				x[j] = swap;
			}
		}
	}
	for(int i=1;i<z+1;i++){
		for(int j=0;j<y;j++){
			if(x[j]==i&&x[j]!=x[j+1]){
				cout << i << endl;
				d++;
			}
		}
	}

	if(d==0) cout << "no";
}
//	int e=1;
//	for(int i=0;e<=z;i++){
//		if(x[i]==x[i+1]) continue;
//		if(x[i]==e){
//			cout << x[i] << endl;
//			d++;
//		}
//		e++;
//	}
//int main(){
//	int x,y=1,a=0;
//	cin >> x;
//	while(y<=x){
//		if(y%6==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%9==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%15==0){
//			cout << y << endl;
//			a=1;		
//		}
//		else if(y%20==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%21==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%26==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%29==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%32==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%33==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%35==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%38==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%39==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%44==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%50==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%51==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%56==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%57==0){
//			cout << y << endl;
//		
//			a=1;
//		}
//		else if(y%62==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%69==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%75==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%87==0){
//			cout << y << endl;
//			a=1;
//		}
//		else if(y%93==0){
//			cout << y << endl;
//			a=1;
//		}
//		y++;
//	}
//	if(a==0) cout << "no";
//}
//6,9,20
