#include <stdio.h>
int main(){
    char *ptr = "GeeksQuiz";
    printf("%c", &*&*&ptr);
    return 0;
}