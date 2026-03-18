
#include <stdio.h>

int main(){
    int int_num;
    float float_num;
    printf("Enter the integer number: ");
    scanf("%d", &int_num);
    float_num = (float)int_num;
    printf("The floating number of %d is %f ",int_num, float_num);
    return 0;

}