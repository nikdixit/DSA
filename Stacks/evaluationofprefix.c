// Parse infix expression and evaluate using Stacks
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> 
#define MAX 100
int top=-1;
char stack[MAX];
void push(char);
char pop();

char pop() {
    char item;
    if(top==-1) {
        printf("Stack is empty");
        return '\0';
    }
    else {
        item=stack[top];
        top--;
        return item;
    }
}

void push(char item) {
    if(top==MAX-1) {
        printf("Stack is full");
    }
    else {
        top++;
        stack[top]=item;
    }
}

void evaluate_expression(char * expression) {
    int i;
    char ch;
    int op1, op2, result;
    for (i = 0; i < strlen(expression); i++) {
        ch = expression[i];
        if (isdigit(ch)) {
            push(ch - '0');
        } else {
            op2 = pop();
            op1 = pop();
            switch (ch) {
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                case '/':
                    result = op1 / op2;
                    break;
            }
            push(result);
        }
    }
    printf("Result of expression evaluation : %d ", pop());
}

int main(){
    char expression[MAX];
    printf("Enter the expression : ");
    scanf("%s", expression);
    evaluate_expression(expression);
    return 0;
}

