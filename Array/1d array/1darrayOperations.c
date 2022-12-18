#include <stdio.h>
#include <stdlib.h>

void arrayCreation();
void arrayInsertion();
void arrayDeletion();
void arraySearch();
void Display();
int size;

int main(){
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int *a=(int *)malloc(sizeof(int)*size);
    int ch;
    while(ch!=6){
        printf("Operations you can perform:\n\t1.Creation\n\t2.Insetion\n\t3.Deletion\n\t4.Search\n\t5.Display\n\tExit\n ");
        printf("Enter the choice:");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("Enter the element of array: ");
                arrayCreation(a);
                printf("\n");
                break;
            case 2:arrayInsertion(a);
                printf("\n");
                break;
            case 3: arrayDeletion(a);
                printf("\n");
                break;
            case 4:
                arraySearch(a);
                printf("\n");
                break;
            case 5:
                Display(a);
                printf("\n");
                break;
            case 6:
                exit(0);
                break;
            default: 
                printf("Enter a valid choice: ");
                break;
        }
    }
}

void arrayCreation(int a[]){
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Array successfully created!\n");
}

void arrayInsertion(int a[]){
    int x,index;
    printf("Enter the element you wanna insert: ");
    scanf("%d",&x);
    printf("Index you wanna insert the element ");
    scanf("%d",&index);

    size++;
    a=(int *)realloc(a,sizeof(int)*size);
    for(int i=size;i>=index-1;i--){
        a[i+1]=a[i];        
    }

    a[index]=x;
}

void arrayDeletion(int a[]){
    int index;
    printf("Array the index you wanna delete: ");
    scanf("%d",&index);

    for(int i=index+1;i<=size;i++){
        a[i-1]=a[i];
    }
    size--;
}

void arraySearch(int a[]){
    int num;
    printf("Enter the element you wanna search: ");
    scanf("&d",&num);

    for(int i=0;i<=size;i++){
        if(a[i]==num){
            printf("Element found at index: %d",i);
        }else{
            printf("Element not found!");
        }
    }
}

void Display(int a[]){
    for(int i=0;i<size;i++){
        printf("Element at index %d :%d\n",i,a[i]);
    }
}