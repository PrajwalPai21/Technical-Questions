#include<stdio.h>
#include<string.h>
int main(){
	char ch[] ={"ABCD"};
	printf("Current String %s\n",ch);
	int len = strlen(ch);
	for(int i=len-1; i>=0;i--){
		printf("%c",ch[i]);
	}
	printf("\n");
	return 0;
}
