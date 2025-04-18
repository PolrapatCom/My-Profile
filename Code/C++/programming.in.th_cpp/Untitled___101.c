#include <stdio.h>

int main(){
	char fname[500],lname[500];
	int x;
	scanf("%s %s %d",&fname,&lname,&x);
	if(2021-x<18){
		printf("You shall not pass!");
	}
	else{
		printf("Welcome %s %s to NongGipsy Pub",fname,lname);
	}
}
