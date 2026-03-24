/*Write a program that prints a floating point
value in exponential format with the following
specifications:
(a) correct to two decimal places;
(b) correct to four decimal places; and
Introduction to C 41
(c) correct to eight decimal places.*/
#include <stdio.h>
int main(){
    float val;
    printf("Enter the floating point number:");
    scanf("%f",&val);
    printf("correct to two decimal places = %.2e\n",val);
    printf("correct to four decimal places = %.4e\n",val);
    printf("correct to eight decimal places = %.8e\n",val);
    return 0;

}