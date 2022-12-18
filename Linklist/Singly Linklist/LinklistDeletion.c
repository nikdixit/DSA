#include <stdio.h>
#include <stdlib.h>

struct  Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr !=NULL){
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node *deleteAValue(struct Node *head){
    struct Node *p=head;
    head=head->next;
    free(p);
    return head;
}

struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p=head;
    struct Node *q=head->next;

    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node *deleteAtEnd(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;

    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

struct Node * deleteAtIndex1(struct Node * head, int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data != value && q->next==NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

int main(){

struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;


    // fifth->data=5;
    // fifth->next=NULL;

    printf("Elements before deletion\n ");
    linkedListTraversal(head);
    printf("\n");

    head = deleteAtEnd(head);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);
}