
#include<stdio.h>
#include<math.h>
int main(){
    int n,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<=1){
        printf("number is neither prime not composite");
        return 0;
    }
    n=sqrt(n);
    for(int i=2;i<=n;i++){//i*i<=n (avoid math.h)
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("composite number");
    }
    else{
        printf("prime number");
    }
    
    return 0;
    
}