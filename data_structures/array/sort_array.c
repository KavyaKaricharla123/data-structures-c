#include <stdio.h>
void sort_arr(int arr[],int n){


    for(int i=0;i<n;i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}
int main(){
    int n;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter array elements:");
        scanf("%d",&arr[i]);
    }
    sort_arr(arr,n);
    printf("Bubble sort array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}