
#include<stdio.h>
int main(){
    int m;
    int n;
    int sum=0;
    printf("Enter values of  m and n(m<=n):");
    scanf("%d %d",&m, &n);
    while(m<=n){
        sum =sum+m;
        m++;

    }
    printf("Sum of numbers from m to n is %d ", sum);
    return 0;
}