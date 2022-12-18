#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;

void dllCreation(int size){
    struct node *temp=NULL;
    struct node *prev=NULL;
    for(int i=0;i<size;i++){
        int data;
        printf("Enter the data of %d node: ",(i+1));
        scanf("%d",&data);

        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        newnode->prev=NULL;

        if(head ==NULL){
            head=newnode;
        }
        if(prev != NULL){
            prev->next=newnode;
            newnode->prev=prev;
        }
        prev=newnode;
    }
}

struct node *insertionAtBegg(){
    int x;
    printf("Enter the data you wanna insert: ");
    scanf("%d",&x);

    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    return newnode;
}

struct node *insertionAtEnd(){
    int x;
    printf("Enter the data you wanna insert: ");
    scanf("%d",&x);

    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    struct node *temp;
    temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}

struct node *insertAtMiddle(){
    int x,pos;
    printf("Enter the data you wanna insert: ");
    scanf("%d",&x);

    printf("Enter the position you wanna insert the data at: ");
    scanf("%d",&pos);

    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    struct node *temp=head;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    (newnode->next)->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}

void display(){
    struct node *temp;
    if (head == NULL){
        printf("List is empty.\n");
    }else{
        temp = head;
        while (temp != NULL){
            printf("Data: = %d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    int size;
    printf("Enter the size of linkist: ");
    scanf("%d",&size);

    dllCreation(size);
    int choice=1;
    while (choice != 0){
        printf("Enter 1 to insert a node at beginning\n "); 
        printf("Enter 2 to insert a node at end\n ");
        printf("Enter 3 to insert a node at middle\n ");
        printf("Enter 0 to exit\n ");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        if (choice == 1){
            head=insertionAtBegg();
            printf("DATA IN THE LIST AFTER INSERTION\n ");
            display();
        }else if (choice == 2){
            head=insertionAtEnd();
            printf("DATA IN THE LIST AFTER INSERTION\n ");
            display();
        }else if (choice == 3){
            head=insertAtMiddle();
            printf("DATA IN THE LIST AFTER INSERTION\n ");
            display();
        }else if (choice == 0){
            break;
        }else{
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

