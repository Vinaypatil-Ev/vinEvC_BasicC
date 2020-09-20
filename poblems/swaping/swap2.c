#include<stdio.h>

int main(){
    int a = 5;
    int b = 20;
    
    printf("Initial: a = %d, b = %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swaping: a = %d, b = %d \n", a, b);
}