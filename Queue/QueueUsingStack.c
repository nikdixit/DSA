//Write program for the implement queue using stack
#include<stdio.h>
#include<stdlib.h>
#define N 5

//defining s1 , s2 for array and the top1 , top2 are for top pointer of the stack and count is used for the counting the element.
int s1[N];
int s2[N];
int top1 = -1;
int top2 = -1;
int count = 0;

//write the pop1 operation 
int pop1(){
    return s1[top1--];
}

//write the pop2 operation
int pop2(){
    return s2[top2--];
}

//write the push2 operation for the stack2 
int push2(int a){
    if(top1 == N-1){
        printf("The queue is full \n");
    }
    else{
    top2++;
    s2[top2] = a;
    }
}

//write the push1 operation for the stack1
int push1(int a){
    if(top1 == N-1){
        printf("The queue is full \n");
    }
    else{
    
    top1++;
    s1[top1]=a;
    }
}

//write the enqueue operation
void enqueue(){
    int data;
    if(top1 == N-1){
        printf("overflow\n");
    }
    else{
    printf("Enter the data: ");
    scanf("%d",&data);
    push1(data);
    count++;
    }
}

//write the dequeue operation for the stack
void dequeue(){
    int i;
    int a;
    int b;
    int x;
    if(top1 == -1){
        printf("the queue is empty\n");
    }
    else{
            for(i = 0 ; i<count ; i++ ){
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("the dequeued element is : %d\n",b);
        count--;
    for(i = 0; i<count ; i++){
        x = pop2();
        push1(x);
    }
}
}

//display operation for the queue usig stack 1
void display(){
    int i;
    if(top1==-1){
        printf("There is no element in the queue\n");
    }
    else{
    for(i = 0 ; i<= top1 ; i++){
        printf("%d ", s1[i]);
    }
    printf("\n");
    }
}

int main(){
    int choice;
    while(1){
        printf("Operations you can perform:\n\t 1.Enqueue\n\t 2.dequeue\n\t 3.Display\n\t 4.Exit\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                printf("invalid choice\n");
            }
        }
    }
    return 0;
}

