#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	int y=x,prime=0,p=0;
	if(x<=0){
		cout << "�������ö����";
		return 0;
	}
	for(int i=2;i<=x;i++){
		p=0;
		for(int j=2;j<i;j++){
			if(i%j==0) p=1;
		}
		if(p==0) prime++;
	}
	cout << "�ӹǹ੾��㹪�ǧ " << " 0 " << "�֧ " << x;
	cout << endl << "������ " << prime << " �ӹǹ";
}

