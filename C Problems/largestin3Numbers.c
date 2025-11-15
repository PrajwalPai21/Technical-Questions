//1. Find the largest number among the three numbers.
#include<stdio.h>

int main(){

	int num1,num2,num3,largest=0;
	num1 = 10;
	num2 = 20;
	num3 = 30;
	
	if(num1>num2 && num1>num3)
		largest = num1;
	else if(num2>num1 && num2>num3)
		largest = num2;
	else if(num3>num1 && num3>num2)
		largest = num3;
	printf("Largest number is %d\n",largest);
	
	return 0;
		
}
