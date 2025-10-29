#include<stdio.h>

int main(){
	
	char ch[100];
	printf("Input the string\n");
	fgets(ch,sizeof(ch),stdin);
	printf("entered string is %s",ch);
	return 0;
}
