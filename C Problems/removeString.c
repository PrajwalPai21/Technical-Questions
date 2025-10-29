#include<stdio.h>
#include<string.h>
int main(){
	char ch[3][10] = {"Apple","Banana","Orange"};
	int len = sizeof(ch)/sizeof(ch[0]);	

	for(int i=0;i<len;i++)
		printf("%s ",ch[i]);
	
	printf("\n");
}
