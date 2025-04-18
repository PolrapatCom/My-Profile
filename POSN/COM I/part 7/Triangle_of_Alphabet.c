#include <stdio.h>

int a,i,j,count=0;
char cha='A';
main(){
	scanf("%d",&a);
//	for(i=0;i<a;i++){
//		if(i+'A'>'Z'){
//			i-=26; a-=26;
//			}
//		printf("%c",i+'A');
//	}
	for(i=0;i<a;i++){
		for(j=0;j<i;j++){
			if(cha>'Z'){
			cha='A';
			}
			printf("%c",cha);
			cha++;
			count++;
			if(count==a) break;
		}
		printf("\n");
		if(count==a) break;
	}
}
