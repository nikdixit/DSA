//Write program for the implement Deque using Circular Array in c

#include <stdio.h>
#include <stdlib.h>
#define N 5

//defining the array and the front and rear pointer for the array
int deque[N];
int front = -1;
int rear = -1;

void enqueue_front(int a){
    if((rear+1)%N==front){
        printf("The deque is full \n");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        deque[front] = a;
    }
    else{
        front = (front-1+N)%N;
        deque[front] = a;
    }
}

void enqueue_rear(int a){
    if((rear+1)%N==front){
        printf("The deque is full \n");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        deque[rear] = a;
    }
    else{
        rear = (rear+1)%N;
        deque[rear] = a;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("The deque is empty \n");
    }
    else{
        for(int i=front;i!=rear;i=(i+1)%N){
            printf("%d ",deque[i]);
        }
        printf("%d ",deque[rear]);
        printf("\n");
    }
}

void get_front(){
    if(front == -1 && rear == -1){
        printf("The deque is empty \n");
    }
    else{
        printf("The front element is %d \n",deque[front]);
    }
}

void get_rear(){
    if(front == -1 && rear == -1){
        printf("The deque is empty \n");
    }
    else{
        printf("The rear element is %d \n",deque[rear]);
    }
}

void dequeue_front(){
    if(front == -1 && rear == -1){
        printf("The deque is empty \n");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("The dequeued element is %d \n",deque[front]);
        front = (front+1)%N;
    }
}

void dequeue_rear(){
    if(front == -1 && rear == -1){
        printf("The deque is empty \n");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("The dequeued element is %d \n",deque[rear]);
        rear = (rear-1+N)%N;
    }
}