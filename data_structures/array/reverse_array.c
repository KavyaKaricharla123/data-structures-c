#include <stdio.h>

void reverse_array(int arr[],int n){
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n; i++ ){
        printf("Enter array elements:");
        scanf("%d",&arr[i]);
    }
    reverse_array(arr, n);
    printf("Reverse array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}