/*Write a program to read 10 integers. Display these
numbers by printing three numbers in a line
separated by commas.*/

#include <stdio.h>

int main() {
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;

    scanf("%d %d %d %d %d %d %d %d %d %d",
          &a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);

    printf("%d, %d, %d\n", a1, a2, a3);
    printf("%d, %d, %d\n", a4, a5, a6);
    printf("%d, %d, %d\n", a7, a8, a9);
    printf("%d\n", a10);

    return 0;
}