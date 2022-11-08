#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(){
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data(-1 for no node): ");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d\n",x);
    newnode->left=create();
    printf("Enter right child of %d\n",x);
    newnode->right=create();
    return newnode;
}

void preorder(struct node *root){
    if(root==0){
        return;
    }
    printf("%d  ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root){
    if(root==0){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    printf("%d  ",root->data);
}

void inorder(struct node *root){
    if(root==0){
        return;
    }
    inorder(root->left);
    printf("%d  ",root->data);
    inorder(root->right);
}

void main(){
    struct node *root;
    root=0;
    root=create();
    printf("\n");
    printf("PreOrder is: ");
    preorder(root);
    printf("\n");
    printf("PostOrder is: ");
    postorder(root);
    printf("\n");
    printf("InOrder is: ");
    inorder(root);
    printf("\n");    
}