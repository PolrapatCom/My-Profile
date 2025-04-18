#include <stdio.h>

int i,j,a,b=1,c=1;
main(){
	scanf("%d",&a);
	for(i=1;i<=2*a-1;i++){
		if(i==1||i==2*a-1){
			printf("#");
			for(j=1;j<=2*a-3;j++) printf(" ");
			printf("#");
		}
		else {
			printf("#"); 
				for(j=1;j<=2*a-3;j++){
					if(j==i-1) {
						printf("#");  
					}
					else printf(" ");
				}
			printf("#");
			}	
		printf("\n");
	}
}
