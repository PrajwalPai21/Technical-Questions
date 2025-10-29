#include<stdio.h>

int main(){
	
	char ch[100];
	int insideWord=0,count=0;
	printf("Enter a sentence\n");
	fgets(ch,sizeof(ch),stdin);
	
	for(int i=0;ch[i] != '\0';i++){
		if(ch[i] == ' ' || ch[i] == '\n')
			insideWord = 0;
		else if(insideWord == 0){
			insideWord = 1;
			count++;
		}
	}
	printf("Total number of words %d\n",count);
}
