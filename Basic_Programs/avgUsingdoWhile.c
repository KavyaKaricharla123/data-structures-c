
#include <stdio.h>
int main(){
    int n,i=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int sum=0;
    float avg;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    avg=(float)sum/n;
    printf("sum of the numbers is upto %d is %d\n", n, sum);
    printf("Average of the numbers upto %d is %f ",n , avg);
    return 0;


}