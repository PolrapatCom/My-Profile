#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int A,B,C,i,j,k,l,max;
//	long start;
	cin >> A >> B >> C;
//	max = abs(A);
//	if(abs(B)>max) max=abs(B);
//	else if(abs(C)>max) max=abs(C);
//	start = 2*max;
	if(pow(B,2)-(4*A*C)<0){
		cout << "No Solution";
		return 0;
	}
	for(i=1;i<=A;i++){
		if(A%i != 0) {continue;}
		for(k=1;k<=A/i;k++){
			if(i*k==A){
				for(j=-100;j<=100;j++){
					for(l=-100;l<=100;l++){
						if((i*l+j*k==B)&&(j*l==C)){
							cout << i << " " << j << " " << k << " " << l;
							return 0;
						}	
					}
				}
			}	
		}
	}
}
//A = ac, B =
//ad + bc, C = bd
