//Left Rotate Array by K
#include<stdio.h>
void rotate(int arr[],int left,int right){
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int k=2;
    int n=5;
    k=k%n;
    rotate(arr,0,k-1);
    rotate(arr,k,n-1);
    rotate(arr,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}