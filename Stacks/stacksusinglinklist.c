#include <stdio.h>
#include <stdlib.h> 
void push(int x);
void pop();
void peek();
void pop();
void display();

struct node   
{  
int data;  
struct node *link;  
};  
struct node *top=0; 

void push(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node ));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
    printf("Insertion successfull!!!\n");
}

void pop(){
    struct node* temp;
    temp=top;
    if(top==0){
        printf("underflow.stack is empty!\n");
    }else{
        printf("Deleted element is: %d",top->data);
        top=top->link;
        free(temp);
    }
}

void peek(){
    if(top==0){
        printf("Underflow condition,stack is empty!\n");
    }else{
        printf("Top element is: %d\n",top->data);
    }
}

void display(){
    struct node *temp;
    temp=top;
    if(top==0){
        printf("Underflow,stack is empty\n");
    }else{
        while(temp!=0){
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}

int main(){
    int ch;
    while(ch!=5){
        printf("\nOperations you can perform: \n\t 1.Push \n\t 2.Pop \n\t 3.Peek/Top \n\t 4.Display \n\t 5.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
        int x;
        printf("Enter the number to be inserted: ");
        scanf("%d",&x);
        push(x);
            break;        
        case 2 :pop();
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