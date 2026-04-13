#include <stdio.h>
int main(){
    int arr[] = { 1, 3, 5, 7, 9, 11, 13 };
    int arraySize = 7;
    int low = 0;
    int high = arraySize-1;
    int target = 7;
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]==target){
            printf("Element found: %d ",mid);
            return 0;
        }
        else if(arr[mid]<target)
        {
            high = mid +1;
        }
        else
            low =mid-1;

    }
    printf("Nor found");
    return 0;
}