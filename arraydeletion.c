#include <stdio.h>
int main(){
    int a[100],n,num,index;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elemrnts of array: ");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array before deletion: ");
    for (int i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i]);
    }

    printf("Enter the index to be deleted: ");
    scanf("%d",&index);

    for(int i=index+1;i<=n;i++){
        a[i-1]=a[i];
    }
    n--;
    printf("Updated array: ");
    for(int i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i]);
    }
}