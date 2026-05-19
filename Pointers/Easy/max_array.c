//max element in array using pointers
#include<stdio.h>

int main()
{
    int arr[]= {1,2,3,7,9,22,1,4};
    int max = arr[0];
    int *p=arr;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(*(p+i)>max){
            max = *(p+i); 
        }
    }
    printf("Max = %d", max);


}