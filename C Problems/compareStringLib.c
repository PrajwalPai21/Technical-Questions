#include<stdio.h>
#include<string.h>

int main(){
	char str1[] = {"ABCD"};
	char str2[] = {"ABCB"};
	int compare = strcmp(str1,str2);
	printf("String 1 : %s\nString 2 : %s\n",str1,str2);
	if(compare == 0)
		printf("Strings are Equal\n");
	else 
		printf("Strings are not Equal\n");
	printf("\n");
	return 0;
}
