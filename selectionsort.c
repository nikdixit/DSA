#include <stdio.h>

void selectionsort(int a[],int size){
    int temp,small;
    for(int i=0;i<size-1;i++){
        small =i;

        for(int j=i+1;j<size;j++){
            if(a[j]<a[small]){
                small=j;
            }
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }
}

void print(int a[],int size){
    for(int i=0;i<size;i++){
        printf("a[%d]=%d \n",i,a[i]);
    }
}

int main(){
    int a[100],size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Array before sorting: \n");
    print(a,size);

    selectionsort(a,size);

    printf("Array after sorting: \n");
    print(a,size);
}