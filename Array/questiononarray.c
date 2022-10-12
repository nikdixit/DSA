// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
    
//     // int arr[1000];
//     int n,i;
    
//     scanf("%d",&n);
//     int *arr = (int*) malloc(n*sizeof(int));
    
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     int sum=0;
//     for(i=0;i<n;i++){
//         sum = sum+arr[i];
//     }
//     printf("%d",sum);  
//     return 0;
// }  


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i=num-1;i<=0;i--){
        printf("%d",arr[i]);
    }
}