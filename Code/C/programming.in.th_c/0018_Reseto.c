#include <stdio.h>

int n,k,i,idx=0,j,swp=0,ans=0;
main(){
	scanf("%d %d",&n,&k);
	int num[1000]={0};
	for(i=2;i<=n;i++){
		num[i]=i;
	}
	for(i=2;i<=n;i++){
		if(num[i]==0) continue;
		if(num[i]!='\0'){
			ans=i;
			swp = i;
			num[i]=0;
			idx++;
			if(idx==k){
				printf("%d",ans);
			}
			for(j=2;j<=n;j++){
				if(num[j]==0) continue;
				if(num[j]%swp==0){
					ans=j;
					num[j]=0;
					idx++;
					//if(num[j]==swp) idx--;
					if(idx==k){
						printf("%d",ans);
					}
				} 
			}
		}
	}
}
