#include <stdio.h>
int main(){
    int arr[] = { 1, 3, 5, 5, 5, 7, 9 };
    int arraySize = 7;
    int low = 0;
    int high = arraySize-1;
    int target = 5;
    int x =0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target){
             x = mid;
            high = mid-1;
        }
        else if(arr[mid]<target){
            low = mid +1;
        }
        else 
            high = mid - 1;

    }
    printf("first occurrence: %d",x);
    return 0;
}