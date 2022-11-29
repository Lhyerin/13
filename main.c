#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];
	double grade; 
};

void main(void) {
	struct student student1= {1003,"Juyeop",4.3};
	
	student1.ID =1020;
	strcpy(student1.name, "kimjuyeop");
	student1.grade =3.3;
	
	printf("ID : %i\n",student1.ID);
	printf("name : %s\n",student1.name);
	printf("grade : %1f\n",student1.grade);
	return 0;
	
}
