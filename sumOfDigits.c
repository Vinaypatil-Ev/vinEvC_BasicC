#include <stdio.h>

//sum of digit in num

int sumOfDigit(int num){
    // printf("%d ", num);
    if (num<=9 && num>=0){
        return num;
    }
    return num%10 + sumOfDigit(num/10);
}

int main(){
    int num = 98765;
    int result;
    result = sumOfDigit(num);
    printf("%d", result);
}