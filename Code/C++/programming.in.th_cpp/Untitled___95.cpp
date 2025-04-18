#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float diameter;
	cin >> diameter;
	float side = sqrt(pow(diameter,2)/2);
	printf("%.2f\n%.2f",side*4,side*side);
}
//diameter = float(input()) side = (diameter**2/2)**(1/2) print(f'{side*4:.2f}') print(f'{side*side:.2f}')
