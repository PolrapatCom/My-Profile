#include "stdio.h"
#include <string.h>

struct user{
	char name[100],gender;
	int age;
};
main(){
/**/struct user emp1;
	strcpy(emp1.name,"KongRuksiam");
	emp1.gender = 'M';
	emp1.age = 30;
	printf("Name is %s\n",emp1.name);
	printf("Gender is %c\n",emp1.gender);
	printf("Age is %d\n",emp1.age);
	printf("----------------------------------\n");
/**/struct user emp2;
	strcpy(emp2.name,"JojoJaidee");
	emp2.gender = 'G';
	emp2.age = 35;
	printf("Name is %s\n",emp2.name);
	printf("Gender is %c\n",emp2.gender);
	printf("Age is %d\n",emp2.age);
}

