#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* createNode(int value){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode -> data = value; //root
	newNode -> left = NULL;
	newNode -> right = NULL;
	return newNode;
}

//Inorder

void inorder(struct Node* root){
	if(root != NULL){
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}	
}


void preorder(struct Node* root){
	if(root != NULL){
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}	
}


void postorder(struct Node* root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}	
}

int main(){
	struct Node* root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	
    printf("Inorder: ");
    inorder(root);

    printf("\nPreorder: ");
    preorder(root);

    printf("\nPostorder: ");
    postorder(root);
    
	return 0;
}
