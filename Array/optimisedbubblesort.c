#include <stdio.h>
void optbubblesort(int a[],int size){
    int i,j,temp;
    int swap =0;
    for(i=0;i<size;i++){
        for (j=i+1;j<size;j++){
            if(a[j]<a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                swap=1;
            }
        if(swap==0){
            break;
        }
    }
    }
}

void print(int a[],int size){
    for (int i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
}

int main(){
    int a[100],i,j,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter the elements of array: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("The array before sorting: ");
    print(a,size);
    optbubblesort(a,size);

    printf("Array after sorting: ");
    print(a,size);
}












// #include 


// void bubbleSort(int array[], int size) {

  
//   for (int step = 0; step < size - 1; ++step) {
    
    
//     int swapped = 0;
    
    
//     for (int i = 0; i < size - step - 1; ++i) {
      
      
      
//       if (array[i] > array[i + 1]) {
        
        
        
//         int temp = array[i];
//         array[i] = array[i + 1];
//         array[i + 1] = temp;
        
//         swapped = 1;
//       }
//     }
    
    
    
//     if (swapped == 0) {
//       break;
//     }
    
//   }
// }


// void printArray(int array[], int size) {
//   for (int i = 0; i < size; ++i) {
//     printf("%d  ", array[i]);
//   }
//   printf("\n");
// }


// int main() {
//   int data[] = {-2, 45, 0, 11, -9};
  
  
//   int size = sizeof(data) / sizeof(data[0]);

//   bubbleSort(data, size);
  
//   printf("Sorted Array in Ascending Order:\n");
//   printArray(data, size);
// }