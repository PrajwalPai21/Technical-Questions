#include<stdio.h>

int main(){
	int arr[] = {50,2,3,100,2,421,423,23,45,12,34,57};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorted Array is\n");
	for(int i=0;i<n;i++)
		printf("%d\t",arr[i]);
	
	printf("\nReverse Unsorted Array\n");
	for(int i=n-1;i>(-1);i--)
		printf("%d\t",arr[i]);
	
	printf("\n");
}
