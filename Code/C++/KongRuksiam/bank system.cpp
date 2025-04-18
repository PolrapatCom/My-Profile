#include <stdio.h>

void deposite(int value);
void withdraw(int amount);
int balance();
int number = 1000;

main(){
    deposite(500);
    printf("Balance is %d",balance());
    return 0;
}
void deposite(int value){
	if(value > 0){
		number += value;
	}else{
		printf("Error\n");
	}
}
void withdraw(int amount){
	if(amount <= number){
		number -= amount;
	}else{
		printf("Error\n");
	}
}
int balance(){
	return number;

}

