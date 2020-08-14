#include<stdio.h>
int main(){
    //declaring pointers:
    //<data_type> *<pointer_Name>
    int a=5;
    int *p;

    p = &a;

    //printing pointers
    printf("%p\n",p);
    printf("%p\n",&a);

    //printing values
    printf("%d\n",a);
    printf("%d\n",*p);


}