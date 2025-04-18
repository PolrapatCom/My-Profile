#include <iostream>

using namespace std;

int main(){
	char x[6][500];
	for(int i=0;i<7;i++){
		cin >> x[i];
	}
	cout << "--- Customer Detail ---" << endl;
	cout << "Name : " << x[0] << " " << x[1] << endl;
	cout << "Address : " << x[2] << " " << x[3] << endl;
	cout << "Gender : " << x[4] << endl;
	cout << "Tel : " << x[5];
}
//--- Customer Detail ---
//Name : Sommai Sookjai
//Address : 89/8 LA
//Gender : Male
//Tel : 0989889988 
