#include<stdio.h>

int main(){
	
	int n,first,second,sum;
	first = 1;
	second = 1;
	n = 10;
	sum = 0;
	
	printf("%d\t%d\t",first,second);
	for(int i = 0;i<n;i++){
		 sum = first + second;
		 second = first;
		 first = sum;
		 printf("%d\t",sum);
	}
	printf("\n");
	
	return 0;
}
