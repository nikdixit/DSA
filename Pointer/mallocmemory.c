#include <stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    int n,i;

    printf("Enter the size of array; ");
    scanf("%d",&n);

    ptr=(int*) malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("Memory not allocated.\n");
    }else{
        printf("Memory succesfully allocated. \n");
        
        printf("Enter the elements of array: ");
        for(int i=0;i<n;i++){
            scanf("%d",&ptr[i]);
        }

        printf("Array is: ");
        for(int i=0;i<n;i++){
            printf("%d ",ptr[i]);
        }
    }


}