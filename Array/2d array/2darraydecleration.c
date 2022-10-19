#include <stdio.h>
int main(){
    int row,col;
    int a[100][100];
    printf("Enter the rows: ");
    scanf("%d",&row);

    printf("Enter the coloums: ");
    scanf("%d",&col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
    }
}