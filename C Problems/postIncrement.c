#include<stdio.h>

int main(){
	int a = 5;
	printf("Value of A %d\n",a);

	int b = ++a;
	
	printf("Value of ++A %d\n",b);
	
	int c = a++;
	
	printf("Value of A++ %d\n",a++);
	
	return 0;
}
