#include<stdio.h>
int main(){
    int x = 10;
    int *ptr = &x;
    printf("value = %d\n",x);
    printf("address = %x\n",ptr);
    printf("value using dereferencing = %d\n",*ptr);
    printf("address of ptr = %x\n",&ptr);
    printf("value in ptr = %d\n",&x);
    return 0;


}