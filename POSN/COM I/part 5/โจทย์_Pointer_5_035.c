#include <stdio.h>

int j,a,i,b,swp;
int element[100];
main(){
	printf("Test Data :\n\tInput the number of elements: ");
	scanf("%d",&a);
	printf("\tInput %d number of elements in the array :\n",a);
	for(i=1;i<=a;i++){
		printf("\t\telement - %d : ",i);
		scanf("%d",&element[i-1]);
		b++;
	}
	printf("Expected Output :\n\tThe elements in the array after sorting :\n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(element[i]<element[j]){
				swp = element[i];
				element[i]=element[j];
				element[j]=swp;
			}
		}	
	}
	for(i=0;i<a;i++){
			printf("\t\telement - %d : ",i+1);
			printf("%d\n",element[i]);	
	}
}

/*Test Data :

Input the number of elements: 5
Input 5 number of elements in the array :

element - 1 : 25
element - 2 : 45
element - 3 : 89
element - 4 : 15
element - 5 : 82

Expected Output :

The elements in the array after sorting :

element - 1 : 15
element - 2 : 25
element - 3 : 45
element - 4 : 82
element - 5 : 89*/
