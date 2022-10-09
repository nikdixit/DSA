#include <stdio.h>
int main(){
    int a[100],n,num,i;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elemrnts of array: ");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array: ");
    for (int i=0;i<n;i++){
        printf("a[%d]=%d \n",i,a[i]);
    }

    printf("Enter the number you wanna search: ");
    scanf("%d",&num);

    for (i=0;i<n;i++){
        if(a[i]==num){
            i;
            break;
        }
    }

    if(a[i]!=num){
        printf("Number not found! ");
        }else {
            printf("The number %d is found at position %d.",num,i+1);
        }
    }


