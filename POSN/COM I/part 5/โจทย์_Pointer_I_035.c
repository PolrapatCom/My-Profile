#include <stdio.h>

int num[10],a,i,sum;
int *pnum = &num;
main(){
	printf("Input the number of elements max 10) : ");
	scanf("%d",&a);printf("Input %d number of elements in the array :\n",a);
	for(i=1;i<=a;i++){
		printf("\telement - %d = ",i);
		scanf("%d",pnum+i);
		sum += *(pnum+i);
	}
	printf("Expected Output :\n\tThe sum of array is : %d",sum);
	pnum = &num[1];
	//printf("%d",*pnum);
	
}

/*Input the number of elements max 10) : 5
Input 5 number of elements in the array :

element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6

Expected Output :

The sum of array is : 20*/
