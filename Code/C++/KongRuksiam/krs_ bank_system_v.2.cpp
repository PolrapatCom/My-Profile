#include <stdio.h>

void deposite(int value);
void withdraw(int value);
int balance();
int number = 1000;

main(){
    withdraw(0);
    printf("Balance is %d",balance());
    return 0;
}
void deposite(int value){
	if(value > 0){
		number += value;
	}else{
		printf("Error\n");
	}}
void withdraw(int value){
	if(value <= number && value > 0){
		number -= value;
	}else{
		printf("Error\n");
	}}
int balance(){
	return number;}

