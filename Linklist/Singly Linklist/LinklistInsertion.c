#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linklistTransversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *InsertAtStart(struct Node *head,int x){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=x;

    head=ptr->next;
    return head;
}

struct Node * InsertInBetween(struct Node *head,int x, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while (i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = x;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *InsertAfterANode(struct Node *head,struct Node *preNode,int x){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=x;

    ptr->next=preNode->next;
    preNode=ptr->next;
    return head;
}

struct Node *InsertAtEnd(struct Node *head,int x){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    ptr->data=x;
    ptr->next=NULL;
    return head;
}

int main(){
    struct Node * head=(struct Node *)malloc(sizeof(struct Node));
    struct Node * second =(struct Node *)malloc(sizeof(struct Node));
    struct Node * third=(struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;

    // printf("Linklist Before Insertion: ");
    // linklistTransversal(head);
    // printf("\n");

    
    printf("Linked list before insertion\n");
    linklistTransversal(head);
    head = InsertAtStart(head, 56);
    // head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);
    // head=InsertAfterANode(head, third, 45);
    printf("\nLinked list after insertion\n");
    linklistTransversal(head);















//     int ch;
//     int x=0;  
//     while(ch !=5){


//         printf("Insertion you can perform at:\n\t1. At start\n\t2.In Between\n\t3.At End\n\t4.After a Node\n\t5.Exit\n");
//         printf("Enter choice: ");
//         scanf("%d",&ch);
//         switch (ch){
//             case 1: 
//                 printf("Enter the data you wanna insert at the start: ");
//                 scanf("%d",&x);
//                 head=InsertAtStart(head,x);
//                 linklistTransversal(head);
//                 break;
//             case 2:
//                 int index=0; 
//                 printf("Enter the data you wanna insert: ");
//                 scanf("%d",&x);
//                 printf("Enter the node you wanna insert the data(between 2-4): ");
//                 scanf("%d",&index);
//                 head=InsertInBetween(head,x,index);
//                 linklistTransversal(head);
//                 break;
//             case 3: 
//                 printf("Enter the data you wanna insert at the end: ");
//                 scanf("%d",&x);
//                 head=InsertAtEnd(head,x);
//                 linklistTransversal(head);
//                 break;
//             case 4:
//                 printf("Enter the data you wanna insert after a node: ");
//                 scanf("%d",&x);
//                 printf("\nEnter the previous node: ");
//                 // scanf("%d",**preNode);
//                 head=InsertAfterANode(head,third,x);
//                 linklistTransversal(head);
//                 break;
//             case 5:
//                 exit(0);
//                 break;
//             default: 
//                 printf("Enter a valid choice.\n ");
//                 break;
//         }
//     }
}