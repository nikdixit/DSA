#include <stdio.h>
#define size 10
int stack[size];
int top=-1;
void push();
void pop();
void peek();
void display();

void main(){
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

void length() {
    printf("Length of stack is %d",top+1);
}

void change(int pos, int val) {
    stack[pos] = val;
    printf("Value changed at position %d",pos);
}

void push_and_pop(int val) {
    // Push the val into the stack and return a popped element from the stack
    push(val);
    pop();
}


void push_multiple(int val[], int n) {
    // Push multiple values into the stack
    for(int i=0;i<n;i++) {
        push(val[i]);
    }
}

void pop_multiple(int n) {
    // Pop multiple values from the stack
    for(int i=0;i<n;i++) {
        pop();
    }
}




void push(int x){
    if(top == size-1)
        printf("\nStack is Full!!! Insertion is not possible!!!");
    else{
        top++;
        stack[top] = x;
        printf("\nInsertion successfull!!!\n");
        }
    }

void pop(){
    int deldata;
    if(top==-1){
        printf("Underflow condition");
    }else{
        deldata=stack[top];
        top--;
        printf("The poped data is: %d",deldata);
    }
}

void peek(){
    if(top==-1){
        printf("The stack is empty.");
    }else{
        printf("The data at top is: %d",stack[top]);
    }
}

void display(){
    if(top == -1)
        printf("\nStack is Empty!!!");
    else{
        int i;
        printf("\nStack elements are:\n");
        for(i=top; i>=0; i--)
        printf("%d\n",stack[i]);
    }
}