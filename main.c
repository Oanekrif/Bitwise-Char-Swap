#include <stdio.h>

void swap(char *a, char *b){
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

int main(){
    char a, b;
    printf("Enter two characters: ");
    scanf("%c %c", &a, &b);
    printf("Before swap: a = %c, b = %c\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %c, b = %c\n", a, b);
    return 0;
}