#include "stdio.h"
#include <string.h>

typedef struct{
	char name[100],gender;
	int age;
}employee;
void showData(employee person);
main(){
/**/employee emp1 = {"KongRuksiam",'M',30};
	showData(emp1);
/**/employee emp2= {"JojoJaidee",'G',35};
	showData(emp2);
}
void showData(employee person){
	printf("Name is %s\n",person.name);
	printf("Gender is %c\n",person.gender);
	printf("Age is %d\n",person.age);
	printf("----------------------------------\n");
}

