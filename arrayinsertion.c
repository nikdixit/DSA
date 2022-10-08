#include <stdio.h>
int main(){
    int a[100],num,n,index;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the array element: ");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array before insertion: ");
    for (int i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i] );
    }

    printf("Enter the element to be inserted: ");
    scanf("%d",&num);

    printf("Enter the index: ");
    scanf("%d",&index);

    for(int i=n;i>=index;i--){
        a[i+1]=a[i];
    }
    n++;
    a[index]=num;

    printf("Array abfter insertion: ");
    for(int i=0;i<n;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}
