#include <stdio.h>

int main(){
	int x,y,i;
	scanf("%d %d",&x,&y);
	int a[y],b[y]; char c[y+1][500],ans[y+1];
	for(i=0;i<y;i++){
		scanf("%d %d %s",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<y;i++){
		if(x>=a[i]&&x<=b[i]) break;
	}	
	printf("%s",c[i]);
}
