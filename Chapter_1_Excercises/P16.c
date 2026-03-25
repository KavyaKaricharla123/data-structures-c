/*Write a program to print ‘Programming in C is
Fun’ using pointers.*/
#include<stdio.h>

int main(){
    
    char str[] = "Programming in C is Fun";
    char *p;
    p = str;
    printf("%s",p);

    return 0;

}