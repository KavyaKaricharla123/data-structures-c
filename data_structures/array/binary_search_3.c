#include <stdio.h>
//last occurrence
int main(){
    int arr[]={1, 3, 5, 5, 5, 7, 9};
    int arraySize=7;
    int low =0;
    int high = arraySize-1;
    int x=0;
    int target =5;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            x=mid;
            low = mid +1;
        }
        else if (arr[mid]<target){
            low = mid +1;
        }
        else high = mid-1;
    }
    printf("Last occurrence : %d", x);
    return 0;

}