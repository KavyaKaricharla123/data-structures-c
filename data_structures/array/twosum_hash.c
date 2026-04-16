#include <stdio.h>
int main(){
    int arr[]={11,7,15,2};
    int n=4;
    int target =9;
    int hash[100]={0};

    for(int i=0;i<100;i++){
        hash[i]=-1;
    }

    for(int i=0;i<n;i++){
        int needed=target-arr[i];

        if(needed>=0 && hash[needed] != -1){
            printf("%d %d",hash[needed],i);
            return 0; 
        }
        hash[arr[i]]=i;
    }
    
    return 0;
}