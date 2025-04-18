#include "stdio.h"
#include <string.h>

struct user{
	char name[100],gender;
	int age;
};
main(){
/**/struct user emp1 = {"KongRuksiam",'M',30};
	printf("Name is %s\n",emp1.name);
	printf("Gender is %c\n",emp1.gender);
	printf("Age is %d\n",emp1.age);
	printf("----------------------------------\n");
/**/struct user emp2= {"JojoJaidee",'G',35};
	printf("Name is %s\n",emp2.name);
	printf("Gender is %c\n",emp2.gender);
	printf("Age is %d\n",emp2.age);
}

