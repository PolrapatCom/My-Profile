#include <stdio.h>

float pi();
int follower();

main(){
	float number = pi();
	int amount = follower();
	printf("Pi is equal to %.2f\n",number);
	printf("Amout of follower is equal to %d",amount);
}
float pi(){
	return 3.14;
}
int follower(){
	return 5000;
}

