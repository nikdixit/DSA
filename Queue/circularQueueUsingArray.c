#include <stdio.h>
#include <stdlib.h>
int *queue;
int front=-1,rear=-1;
int size;

void enqueue(int x){
    if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=x;
    }else if((rear+1)%size==front){
        printf("Queue is full!\n");
    }else{
        rear=(rear+1)%size;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1&&rear==-1){
        printf("Queue is empty!\n");
    }else if(front==rear){
        front=rear=-1;
    }else{
        printf("The dequeued element is %d\n",queue[front]);
        front=(front+1)%size;
    }
}

void display(){
    int i=front;
    if(front==-1&&rear==-1){
        printf("Queue is empty!\n");
    }else{
        printf("The elements in the queue are: ");
        while(i!=rear){
            printf("%d ",queue[i]);
            i=(i+1)%size;
        }
        printf("%d ",queue[rear]);
    }
}

void peek(){
    if(front==-1&&rear==-1){
        printf("Queue is empty!\n");
    }else{
        printf("The peek element is %d\n",queue[front]);
    }
}

int main(){
    printf("Enter the size of the queue:");
    scanf("%d",&size);
    queue=(int *)malloc(size*sizeof(int));

    int choice;
    while(choice!=5){
        printf("\nOperations you can perform: \n\t 1.Enqueue \n\t 2.Dequeue \n\t 3.Peek/Top \n\t 4.Display \n\t 5.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        int x;
        printf("Enter the number to be inserted: ");
        scanf("%d",&x);
        enqueue(x);
            break;        
        case 2 :dequeue();
            break;
        case 3: peek();
            break;
        case 4: display();
            break;
        case 5: exit(0);
            break;
        default: printf("Invalid choice\n");
            break;
        }
    }
}