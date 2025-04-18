#include <stdio.h>

main(){
	int score,num,i,j;
		printf("Enter N = ");
		scanf("%d",&num);
		for(i=1;i<=num;i++){
			for(j=1;j<=num;j++){
			printf("%d",j+i-1);
		}
		printf("\n");
	}		
}

