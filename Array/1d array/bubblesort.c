#include <stdio.h>

void bubblesort(int a[],int size){
    int i,j,temp;
    for (i=0;i<size-1;i++){
        for (j=i+1;j<size-1;j++){
            if(a[j]<a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}

void print(int a[],int size){
    for (int i=0;i<size;i++){
        printf("%d \n",a[i]);
    }
}

void main(){
    int a[100],i,j,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Array before sorting: \n");
    print(a,size);
    bubblesort(a,size);

    printf("Array after sorting: \n");
    print(a,size);
}