#include <stdio.h>

int i,a,j,num[555],abc[10];
main(){
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<a;i++){
		if(abc[0] < abc[1] && abc[0] < abc[2]) {
			abc[0] += num[i];
			printf("A\n");
		} else if(abc[1] < abc[0] && abc[1] < abc[2]) {
			abc[1] += num[i];
			printf("B\n");
		} else if(abc[2] < abc[1] && abc[2] < abc[0]) {
			abc[2] += num[i];
			printf("C\n");
		} else {
			if(abc[0] <= abc[1] && abc[0] <= abc[2]) {
				abc[0] += num[i];
				printf("A\n");
			} else {
				abc[1] += num[i];
				printf("B\n");
			}
		}
	}
}
