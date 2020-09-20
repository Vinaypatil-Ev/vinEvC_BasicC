#include<stdio.h>

int count(int num){
    if(num<=9 && num>=0){
        return 1;
    }
    return 1 + count(num/10);
}

int main(){
    int num = 1000000000;
    int result;
    result = count(num);
    printf("No of digits in %d are: %d", num, result);
    
}