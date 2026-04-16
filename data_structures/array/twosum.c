#include<stdio.h>
int main(){
    int arr[]={2,7,11,7};
    int target = 9;
    int n=4;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==target){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    return 0;
}