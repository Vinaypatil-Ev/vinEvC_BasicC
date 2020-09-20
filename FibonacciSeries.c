#include<stdio.h>

/*
Fibonacci Series
f(n) = 0                if n = 0
     = 1                if n = 1
     = f(n-1) + f(n-2)  if n>1
*/

int fibonacci(int num){
    if(num==0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}

int main(){
    int num = 100;
    int result;
    for(int i=0; i<num; i++){
    result = fibonacci(i);
    printf("%d ",result);
    }
    
}