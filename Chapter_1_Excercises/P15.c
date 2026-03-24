/*Write a program to find whether a number is
divisible by two or not using functions.*/
#include<stdio.h>

int numberdivision(int x)
{
    return(x%2==0);

}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int k = numberdivision(n);
    if(k==1){
        printf("Number divisible by 2");
    }
    else{
        printf("Number not divisible by 2");
    }
    return 0;

}