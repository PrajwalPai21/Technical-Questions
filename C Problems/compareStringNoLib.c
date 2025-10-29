#include<stdio.h>
#include<stdlib.h>

int main(){
	char str1[100],str2[100];
	int equal = 1;
	
	printf("Enter String 1\n");
	fgets(str1,sizeof(str1),stdin);
	
	
	printf("Enter String 2\n");
	fgets(str2,sizeof(str2),stdin);
	printf("\n");
	for(int i=0;str1[i] != '\0'||str2[i] != '\0' ;i++){
		if(str1[i] != str2[i]){
			equal = 0;
			break;
		}
	}
	
	if(equal == 1)
		printf("%s and %s are the same\n",str1,str2);
	else
		printf("%s and %s are not the same\n",str1,str2);
	return 0;
}
