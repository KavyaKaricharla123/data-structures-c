/*Write a program to find the smallest of three
integers using functions.*/
#include<stdio.h>

 void smallestNum(int n1,int n2,int n3){
    if(n1<n2 && n1<n3){
        printf("%d is the smallest.",n1);
    }
    else if(n2<n1 && n2<n3){
        printf("%d is the smallest.",n2);
    }
    else{
        printf("%d is the smallest.",n3);
    }
 }
 int main(){
    int a,b,c;
    printf("Enter the values of a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    smallestNum(a,b,c);
    return 0;
    
 }