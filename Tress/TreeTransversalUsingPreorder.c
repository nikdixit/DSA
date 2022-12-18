#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
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

struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    // struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

void search(struct node *root,int searchkey){
    int ncount=0;
    int ycount=0;
    if(root==NULL){
        ncount++;
        return;
    }else if (root->data==searchkey){
        ycount++;
        return;
    }else{
        search(root->left,searchkey);
        search(root->right,searchkey);
    }
    // search(root->left,key);
    // search(root->right,key);
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
    int ch;
    while(ch!=5){
    printf("\nOperations you can perform: \n\t 1.Create \n\t 2.Delete \n\t 3.Display \n\t 4.Search \n\t 5.Exit\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        root=create();
        break;        
    case 2 :
        int key;
        printf("Enter the key to be searched: ");
        scanf("%d",&key);    
        deleteNode(root,key);
        break;
    case 3:
        int index;
        while(index!=4){ 
            printf("\nOperations you can perform: \n\t 1.Preorder \n\t 2.Postorder \n\t 3.Inorder \n\t 4.Exit\n");
            printf("Enter choice: ");
            scanf("%d",&index);
        switch (index)
        {
        case 1:
            printf("\n");
            printf("PreOrder is: ");
            preorder(root);
            printf("\n");
            break;
        case 2:
            printf("\n");
            printf("PosOrder is: ");
            postorder(root);
            printf("\n");
            break;
        case 3:
            printf("\n");
            printf("InOrder is: ");
            inorder(root);
            printf("\n");
            break;
        case 4:
            exit(0);
            break;    
        default:
            printf("Invalid choice\n");
            break;
        }
        break;
    }

    case 4:
        int searchkey;
        printf("Enter the key to be searched: ");
        scanf("%d",&searchkey);
        search(root,searchkey);
        break;

    case 5: exit(0);
        break;
    default: printf("Invalid choice\n");
        break;
        }
    }
}