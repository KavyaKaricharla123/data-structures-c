#include <stdio.h>

int remove_duplicates(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int c =0;

    for(int i=1;i<n;i++){//112233
        if(arr[i]!=arr[i-1]){
            c++;
            arr[c]=arr[i];
        }

    }
    return c+1;

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
    n=remove_duplicates(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}