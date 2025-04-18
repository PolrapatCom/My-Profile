#include <stdio.h>

long discount(){
	return 100;
}
main(){
	long price;
	printf("Enter your price : ");
	scanf("%d",&price);
	long total = price-discount();
	printf("Your net balance is : %d",total);
}

