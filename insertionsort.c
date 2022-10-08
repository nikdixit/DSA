#include <stdio.h>
void insertionsort(int a[],int size){
    int temp;
    for(int i=1;i<size;i++){
        temp=a[i];
        int j=i-1;
    
    while(temp<a[j]&&j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
}

void print(int a[],int size){
    for (int i=0;i<size;i++){
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

    insertionsort(a,size);
    printf("Array after sorting: \n");
    print(a,size);
}