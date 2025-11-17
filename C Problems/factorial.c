#include<stdio.h>

int factFunc(int n){
	if(n == 0)
		return 1;
	else 
		return n*factFunc(n-1);
}

int main(){
	printf("Enter a number : ");
	int n;
	scanf("%d",&n);
	int res = factFunc(n);
	printf("Factorial of %d is %d\n",n,res);
	return 0;
}
