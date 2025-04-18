#include <stdio.h>

int a,i,p=0,j;
int chinchin[500]={0};
int chinchin2[500] = {0};
char s[100], s2[100];
main(){
	scanf("%d",&a);
	for(j=1;j<=a;j++){
		
		scanf("%s", &s);
	
		for(i=0;i<=255;i++){
			chinchin[i]=0;
			chinchin2[i]=0;
		}
		for(i=0; s[i] != '\0'; i++) {
			if(s[i]>='A'&&s[i]<='Z')
				s[i]+=32;
			chinchin[s[i]]++;
		}
			scanf("%s", &s2);
		for(i=0; s2[i] != '\0'; i++) {
			if(s2[i] >= 'A' && s2[i] <= 'Z') {
				s2[i] += 32;
			}
			chinchin2[s2[i]]++;
		}
		p=0;
		for(i=0; i<=255; i++) {
			if(chinchin[i] != chinchin2[i]) {
				p = 1;
				break;
		}
	}
	if(p == 1) printf("No\n");
	else printf("Yes\n");
	}
}



