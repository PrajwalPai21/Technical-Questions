#include<stdio.h>

int main(){
	
	char ch[] = {"A a Hello"};
	
	for(int i=0;ch[i] != '\0';i++){
		printf("%c ",ch[i]);
	}
	printf("\n");
	return 0;
}
