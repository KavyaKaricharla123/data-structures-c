
#include<stdio.h>
int evenodd(int);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int flag = evenodd(n);
    if(flag==1){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
}
int evenodd(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}