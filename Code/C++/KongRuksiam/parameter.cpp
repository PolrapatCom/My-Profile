#include <stdio.h>
int number1=100,number2=50;
void showname(char fname[20],char lname[20]){
	printf("Hello : %s %s\n",fname,lname);
}
void calculate(int fnum,int lnum){
	printf("********************\n");
	printf("total is %d",fnum+lnum);
}
main(){
	showname("Kong","Ruksiam");
	showname("Jojo","Jaidee");
	calculate(number1,number2);
}

