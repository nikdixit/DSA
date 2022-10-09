#include <stdio.h>
int main(){
    int x=10;
    int *ptr;
    ptr=&x;
    printf("%d\n", *ptr);
    printf("%p\n", *ptr);
    printf("%u\n", ptr);
    printf("%p\n", ptr);
    printf("%u\n", &x);
    printf("%d\n", ptr);
}