//recursive methord

#include <stdio.h>
int binarysearch(int a[],int beg, int end,int num ){
    while(end>=beg){
        int mid=(beg+end)/2;

        if(a[mid]==num){
            return mid;
        }
        if(a[mid]<num){
            return binarysearch(a,mid+1,end,num);
        }
        if(a[mid]>num){
            return binarysearch(a,beg,mid-1,num);
        }
    }
    return -1;
}

int main(){
    int a[100],size,num;
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter the elments of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d",&num);

    int result=binarysearch(a,0,size-1,num);

    if(result==-1){
        printf("Number not found!");
    }else{
        printf("Number %d found a position %d",num,result+1);
    }
}
