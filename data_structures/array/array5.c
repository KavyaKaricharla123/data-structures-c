#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int temp = arr[0],j=0;
    for(int i=1;i<n;i++){
        arr[j++]=arr[i];
    }
    arr[j]=temp;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

    }