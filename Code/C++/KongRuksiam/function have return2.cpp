#include <stdio.h>

int discount(){
	return 100;
}
main(){
	int price;
	printf("Enter your price : ");
	scanf("%d",&price);
	printf("Your net balance is : %d",price-discount());
}

