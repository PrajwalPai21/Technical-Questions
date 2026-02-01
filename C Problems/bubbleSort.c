//Bubble Sort Algorithm

#include<stdio.h>

void bubbleSort(int arr[], int arrSize){
	for(int i=0;i<arrSize;i++){
		for(int j=0;j<arrSize;j++){
			if(arr[j] > arr[j+1]){
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
			printf("%d\t",arr[j]);
		}
		printf("\n");	
	}
}

int main(){
	
	int arr[] = {5,4,3,2,1};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
	
	printf("Original Array \n");
	for(int i=0;i<arrSize;i++){
		printf("%d\t",arr[i]);	
	}
	
	printf("\nTotal Size of the Array: %d\n",arrSize);
	
	bubbleSort(arr, arrSize);
	
	//printf("\nBubble sorted array\n");
	//for(int i=0;i<arrSize;i++)
		//printf("%d",arr[i]);
		
	printf("\n");
	return 0;
}
