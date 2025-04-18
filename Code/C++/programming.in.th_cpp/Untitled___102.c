#include <stdio.h>
#include <string.h>

int main(){
	char x[501];
	scanf("%[^\n]s",&x);
	int i,y = strlen(x);
	for(i=0;i<y;i++){
		if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'){
			continue;
		}
		printf("%c",x[i]);
	}
}
