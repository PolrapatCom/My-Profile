#include "stdio.h"
#include <string.h>

typedef struct{
	char name[100],gender;
	int age;
}employee;
main(){
/**/employee emp1 = {"KongRuksiam",'M',30};
	printf("Name is %s\n",emp1.name);
	printf("Gender is %c\n",emp1.gender);
	printf("Age is %d\n",emp1.age);
	printf("----------------------------------\n");
/**/employee emp2= {"JojoJaidee",'G',35};
	printf("Name is %s\n",emp2.name);
	printf("Gender is %c\n",emp2.gender);
	printf("Age is %d\n",emp2.age);
}

