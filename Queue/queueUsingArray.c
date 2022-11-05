#include <stdio.h>
#include <stdlib.h>

//allocate memory for the queue dymanically
// int *queue;
// int front=-1,rear=-1;
// int size;

#define size 10
int queue[size];
int front=-1;
int rear=-1;

void enqueue(int x){
    if(rear==size-1){
        printf("Queue is full!\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty!\n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("The dequeued element is %d\n",queue[front]);
        front++;
    }
}



void dislay(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

void peek(){
    if(front==-1 && rear==-1){
        printf("Queue is empty!\n");
    }
    else{
        printf("The peek element is %d\n",queue[front]);
    }
}

int main(){
    int choice;

    while(choice!=5){
        printf("Enter your choice: \n");
        printf("\t1.Enqueue\n");
        printf("\t2.Dequeue\n");
        printf("\t3.Display\n");
        printf("\t4.Peek\n");
        printf("\t5.Exit\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            int x;
            printf("Enter the number to be inserted: ");
            scanf("%d",&x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            dislay();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice, please re-check!\n");
            break;
        }
    }
}



