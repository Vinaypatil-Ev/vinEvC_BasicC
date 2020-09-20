#include <stdio.h>

// Sum of Arithmatic progression
// num = 3 --> 3 + sumOfAP(2)
// num = 2 --> 2 + sumOfAP(1)
// num = 1 --> return 1;

int sumOfAP(int num){
    if(num==0){
        return 0;
    }
    return num + sumOfAP(num-1);
}

int main(){
    int num = 100;
    int result;
    result = sumOfAP(num);
    printf("%d", result);
}