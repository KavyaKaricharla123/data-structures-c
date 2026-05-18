// i am going to swap two numbers using pointers, easy peasy

#include <stdio.h>

int main(){
    int a = 10; int b = 20;

    int *c =&a, *d = &b;
    int temp = *c;
    *c=*d;
    *d=temp;
    printf(" After swapping: %d %d", *c, *d);
    printf("\nAfter swapping: %d %d", a,b);
    return 0;
}