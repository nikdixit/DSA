#include <stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    ptr=(int*) calloc(n,sizeof(int));

    if(ptr == NULL){
        printf("Memory is not allocated. \n");
        exit(0);
    }else{
        printf("Memory is allocated. \n");

        for(i=0;i<n;i++){
            ptr[i]=i+1;
        }
    }

    printf("Enter the elemnts of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    printf("Array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
}