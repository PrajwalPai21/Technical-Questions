#include<stdio.h>
int main(){
	char ch[] = {"1234567890"};
	printf("Current String %s\n",ch);
	int count = 0;
	
	for(int i = 0; ch[i] != '\0'; i++)
		count++;
	printf("Total Length of String is %d\n",count);
	
	return 0;
}
