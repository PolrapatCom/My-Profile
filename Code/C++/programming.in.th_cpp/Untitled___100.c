#include <stdio.h>
#include <string.h>

int main(){
	char x[500];
	scanf("%s",&x);
	int i,y = strlen(x);
	printf("%s -> ",x);
	if(x[y-1]=='y'&&(x[y-2]!='a'&&x[y-2]!='e'&&x[y-2]!='i'&&x[y-2]!='o'&&x[y-2]!='u')){
		x[y-1]='i';
		printf("%ses",x);
		return 0;
	}
	if(x[y-1]=='s'||x[y-1]=='x'||x[y-1]=='z'||(x[y-2]=='s'&&x[y-1]=='h')||(x[y-2]=='c'&&x[y-1]=='h')){
		printf("%ses",x);
		return 0;
	}
	printf("%ss",x);
}
