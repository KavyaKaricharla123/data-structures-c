/*Write a program to read a floating point number.
Display the rightmost digit of the integral part of
the number.*/
//input = 123.44, optput = 3
#include <stdio.h>
int main(){
    float f1;
    printf("Enter the float number:");
    scanf("%f",&f1); 
    int f2=(int)f1;
    printf("%d is the rightmost digit of the integral part of the number %f",f2%10 , f1);
    // we can take abs(f2) instead of f2 if input is negetive add stdlib header
    return 0;

}