#include <stdio.h>

int a,i,b;
int element[100];
main(){
	printf("Test Data :\n\tInput the number of elements max 15) : ");
	scanf("%d",&a);
	printf("\tInput %d number of elements in the array :\n",a);
	for(i=1;i<=a;i++){
		printf("\t\telement - %d : ",i);
		scanf("%d",&element[i-1]);
		b++;
	}
	printf("Expected Output :\n\tThe elements of array in reverse order are:\n");
	for(i=b-1;i>=0;i--){
		printf("\t\telement - %d : ",i);
		printf("%d\n",element[i]);
	}
}

/*Test Data :

Input the number of elements max 15) : 5
Input 5 number of elements in the array :

element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6

Expected Output :

The elements of array in reverse order are:

element - 5 : 6
element - 4 : 5
element - 3 : 4
element - 2 : 3
element - 1 : 2*/
