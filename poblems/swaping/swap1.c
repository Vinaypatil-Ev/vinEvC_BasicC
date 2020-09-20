#include<stdio.h>

int main(){
    int a = 11;
    int b = 13;
    int c;

    printf("Initial: a = %d, b = %d \n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swaping: a = %d, b = %d \n", a, b);
}