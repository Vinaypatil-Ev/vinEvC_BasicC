#include <stdio.h>

int factorial(int num){
    if(num==0){
        return 1;
    }
    return num*factorial(num-1);
}

int main(){
    int num = 19;
    int result;
    result = factorial(num);
    printf("%d", result);
    return 0;
}