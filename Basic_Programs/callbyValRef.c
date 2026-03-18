
#include<stdio.h>
int callbyvalswap(int a, int b);
int callbyrefswap(int *c,int *d);
int callbyvalswap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d and %d are Callby value swap inside function:\n", a,b);
}
int callbyrefswap(int *c,int *d){
    int temp;
    temp=*c;
    *c=*d;
    *d = temp;
    printf("%d and %d are Callby ref swap inside function:\n", *c,*d);
}
int main(){
    int val1,val2,val3,val4;
    printf("Enter the four values:");
    scanf("%d %d %d %d",&val1,&val2,&val3,&val4);
    printf("%d %d are values before call by val swap\n",val1,val2);
    callbyvalswap(val1,val2);
    printf("%d %d are values after call by val swap\n",val1,val2);
    printf("%d %d are values before call by ref swap\n",val3,val4);
    callbyrefswap(&val3,&val4);
    printf("%d %d are values before call by ref swap\n",val3,val4);
    
}