#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;

int LinkedlistLenght(){
    int lenght=0;
    struct node *temp=front;
    while(temp != NULL){
        temp=temp->next;
        lenght++;
    }
    return lenght;
}

void reverseLinkedList()
{
    struct node *first = front;
    struct node *last = front;
    int l = LinkedlistLenght();
    int j = l;
    for (int i = 0; i < j; i++, j--)
    {
        last = front;
        first = front;
        for (int k = 0; k < i; k++)
        {
            first = first->next;
        }
        for (int l = 0; l < j - 1; l++)
        {
            last = last->next;
        }
        int temp = first->data;
        first->data = last->data;
        last->data = temp;
    }
}

void bubbleSort(){
    struct node *temp=front;
    int n= LinkedlistLenght();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            struct node *ith=front;
            for(int k=0;k<j;k++){
                ith=ith->next;
            }
            struct node *jth=ith->next;
            if(ith->data > jth->data){
                int temp=ith->data;
                ith->data=jth->data;
                jth->data=temp;
            }
        }
    }
    reverseLinkedList();
}

void enqueue(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    bubbleSort();
}

void dequeue(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("Queue is empty!\n");
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
    }
    bubbleSort();
}

void display(){
    struct node *temp;
    temp=front;
    if(front==0 && rear==0){
        printf("Queue is empty!\n");
    }
    else{
        while(temp!=0){
            printf("%d ",temp->data);
            temp=temp->next;
        }
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