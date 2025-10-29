#include<stdio.h>

int main(){
	
	int arr[] = {100,2323,421,567,1245,12,8888};
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i<len; i++)
		printf("%d\t",arr[i]);
	
	int large = -1,secondLarge;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		if(arr[i] > large){
			secondLarge = large;
			large = arr[i];
		}
	}
	printf("\nLargest %d",large);
	
	printf("\nSecond Largest number is %d\n",secondLarge);
	
	return 0;
}
