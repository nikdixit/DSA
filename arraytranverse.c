#include <stdio.h>
int main(){
    int a[100],n;

    printf(" Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the array element: ");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for (int i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i] );
    }
    return 0;
}