#include <stdio.h>
int main(){
    int a[100],num,n,index,x;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the array element: ");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array before update: ");
    for (int i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i] );
    }

    printf("Enter the element to be updated: ");
    scanf("%d",&num);

    printf("Update number to ");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(a[i]==num){
            a[i]=x;
        }
    }

    printf("Updated number: ");
    for(int i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i]);
    }
}