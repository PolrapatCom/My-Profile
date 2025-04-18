#include <stdio.h>

int a,i,p=0,j;
char pluem[500];
main(){
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%s",pluem);
		int f=0,e=0;
		for(j=0;pluem[j]!='\0';j++){
			e++;
			if(pluem[j]>='A'&&pluem[j]<='Z'){
				pluem[j]+=32;
			}
		}
		e-=1;
		p=0;
		while(f<e){
			if(pluem[f]!=pluem[e])
			p=1;
			f++;
			e--;
		}
		if(p==0) printf("Yes\n");
		else printf("No\n");
	}
}
