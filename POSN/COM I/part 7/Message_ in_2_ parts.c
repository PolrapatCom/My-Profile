#include <stdio.h>
#include <string.h>

int j,i,count=0,idx=0;
char cha[641],chicken[641][641];
main(){
	scanf("%[^\n]s",cha);
	for(i=0;cha[i]!='\0';i++){
		if(cha[i]==' '){
			count++; 
			idx=0;
		}
		else{
			chicken[count][idx]=cha[i];
			idx++;
		}
	}
//	if(count%2==1){
//		int id=count/2;
//		count++;
//		for(i=0;i<strlen(chicken[id])/2)
//	}
	for(i=0;i<=count;i++){
		printf("%s\n",chicken[i]);
	}
	for(i=0;i<=count/2;i++){
		for(j=0;j<=count/2;j++){
			if(strcmp(chicken[i] , chicken[j])>0){
				char swp[641];
				strcpy(swp,chicken[i]);
				strcpy(chicken[i],chicken[j]);
				strcpy(chicken[j],swp);
			}
		}
	}
	for(i=0;i<=count/2;i++){
		printf("%s ",chicken[i]);
	}
	printf("\n");
		for(i=0;i<=count;i++){
		printf("%s\n",chicken[i]);
	}
	for(i=count/2+1;i<=count;i++){
		for(j=count/2+1;j<=count;j++){
			if(strcmp(chicken[i] , chicken[j])<0){
				char swp[641];
				strcpy(swp,chicken[i]);
				strcpy(chicken[i],chicken[j]);
				strcpy(chicken[j],swp);
			}
		}
	}
	for(i=0;i<=count;i++){
		printf("%s ",chicken[i]);
	}
	//life is the art of drawing without an eraser
}
