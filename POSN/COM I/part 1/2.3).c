#include <stdio.h>

main(){
	int id,bs,ot;
	printf("Enter ID : ");
	scanf("%d",&id);
	printf("Enter base_salary : ");
	scanf("%d",&bs);
	printf("Enter OT : ");
	scanf("%d",&ot);
	float sum = bs + ot;
	if(sum>=100000){
		sum*=1.1;
	}
	else if(sum>=70000){
		sum*=1.07;
	}
	else if(sum>=50000){
		sum*=1.05;
	}
	else if(sum>=30000){
		sum*=1.03;
	}
	else{
		sum*=1.01;
	}
	printf("************************\n");  //use *** to decorate
	printf("ID : %d\n",id);
	printf("Salary = %f\n",sum);
}

