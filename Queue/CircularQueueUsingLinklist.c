//implememnting circular queue using linklist in c

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;

void enqueue(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0){
        front=rear=newnode;
        rear->next=front;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void dequeue(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("Queue is empty!\n");
    }
    else if(front==rear){
        temp=front;
        front=rear=0;
        free(temp);
    }
    else{
        temp=front;
        front=front->next;
        rear->next=front;
        free(temp);
    }
}

void display(){
    struct node *temp;
    temp=front;
    if(front==0 && rear==0){
        printf("Queue is empty!\n");
    }
    else{
        while(temp->next!=front){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
        printf("\n");
    }
}

void peek(){
    if(front==0 && rear==0){
        printf("Queue is empty!\n");
    }
    else{
        printf("The peek element is %d\n",front->data);
    }
}

int main(){
    int choice,x;
    while(1){
        printf("Enter the operation to be performed:\n\t1.Enqueue\n\t2.Dequeue\n\t3.Display\n\t4.Peek\n\t5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
}