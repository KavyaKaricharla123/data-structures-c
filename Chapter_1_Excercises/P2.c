/*Write a program to print the count of even numbers
between 1–200. Also print their sum.*/
#include <stdio.h>
int main(){

    int c=0,sum=0;

    for (int i=1;i<=200;i++){
        if(i%2==0){
            c++;
            sum=sum+i;
        }
    }
    printf("Count of even numbers between 1 - 200 is  %d\n",c);
    printf("Sum of even numbers between 1 - 200 is %d\n ", sum);
}