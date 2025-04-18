#include <stdio.h>

main(){
	int num,i,j=0;
	printf("Enter +N = ");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			j++;
		}
	}
	if(j!=0){
			printf("%d is not prime number",num);
		}
		else
			printf("%d is prime number",num);
}
 
