#include<stdio.h>

struct student{
	int age;
	char usn[50];
	char name[50];
};

int main(){
	struct student stdVar = {22,"4SU21CS067","Prajwal"};
	

	printf("Student Age : %d\n",stdVar.age);
	printf("Student USN : %s\n",stdVar.usn);
	printf("Student Name : %s\n",stdVar.name);
	printf("\n");
	
	stdVar = (struct student){
		.age = 50,
		.usn = "USNUSNUSN",
		.name = "PRAJWAL"
	};
	
	printf("Student Age : %d\n",stdVar.age);
	printf("Student USN : %s\n",stdVar.usn);
	printf("Student Name : %s\n",stdVar.name);
	printf("\n");
	
	return 0;
}
