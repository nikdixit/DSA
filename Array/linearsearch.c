#include <stdio.h>
int linearsearch(int a[],int size,int num){
    int i;
    for(i=0;i<num;++i)
        if(a[i]==num)
            break;
            
    if(i<num)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
}

void main(){
    int a[100],i,size,num;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter the elements in array: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the number to be searched: ");
    scanf("%d",&num);

    linearsearch(a,size,num);

}
