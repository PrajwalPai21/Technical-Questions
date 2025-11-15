#include<stdio.h>

int swapFunc(int *a,int *b){
	int temp =0;
	///printf("%d\t%d\n",*a,*b);
	
	//printf("%p\t%p\n",(void*)a, (void*)b);
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int arr[] = {100,2,4,29,13,42,10};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorted Array is \n");
	for(int i=0;i<arrSize;i++)
		printf("%d\t",arr[i]);
		
	printf("\nSorted Array is \n");
	
	for(int i=0;i<arrSize;i++){
		for(int j=i+1;j<arrSize;j++){
			if(arr[i] > arr[j])
			//here & means sending the address to the function
				swapFunc(&arr[i],&arr[j]);
		}
	}
	
	for(int i=0;i<arrSize;i++)
		printf("%d\t",arr[i]);
	

	printf("\n");	
}
