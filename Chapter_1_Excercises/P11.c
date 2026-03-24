/*Write a program to read an integer. Display
the value of that integer in decimal, octal, and
hexadecimal notation.*/

#include<stdio.h>
int main(){
    int N;
    printf("Enter the integer:");
    scanf("%d",&N);
    printf("Decimal number %d\n = ",N);
    printf("Octal number %o\n = ",N);
    printf("hexadecimal number %x\n = ",N);
    return 0;


}