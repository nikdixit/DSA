#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <windows.h>
int main(){
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int *ptr=(int*) malloc(2000 * sizeof(int));
    free(ptr);


    if(ptr == NULL){
        printf("Memory is not allocated. \n");
        exit(0);
    }else{
        printf("Memory is allocated. \n");

        for(i=0;i<n;i++){
            ptr[i]=i+1;
        }
    }
    // Sleep(1000 * 30);

    // printf("Enter the elemnts of array: ");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&ptr[i]);
    // }

    printf("Array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
}