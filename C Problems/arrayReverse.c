#include<stdio.h>

int main(){
	int arr[] = {1,2,3,4,5};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	printf("Array is\n");
	for(int i =0; i< arrSize;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	printf("Reversed Array is\n");
	for(int i = arrSize - 1; i > -1;i--)
			printf("%d\t",arr[i]);	
	
}
