#include <stdio.h>
//linear search

int main(){
    int arr[] = {5,3,8,2,7};
    int x = 8,flag=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            flag=i;
            break;
        }
    }
    if(flag!=-1){
        printf("%d",flag);
    }else{
        printf("-1");
    }
    return 0;

}