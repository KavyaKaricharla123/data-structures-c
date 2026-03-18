
#include <stdio.h>

int main(){
    int n,c=0;
    printf("Enter number to check if prime or composite:");
    scanf("%d",&n);
    if(n<=1){
        printf("Number %d is not a prime number",n);
        return 0;
    }
    if(n==2){
        printf("Number %d is even prime number",n);
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
            if(c>2){
                break;
            }
         }
    }

    if(c==2){
        printf("Number %d is prime number", n);
    }
    else{
        printf("Number %d is composite number",n);
    }

return 0;
}