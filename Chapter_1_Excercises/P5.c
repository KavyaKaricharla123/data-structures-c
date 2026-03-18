/*Write a program to read two floating point
numbers. Add these numbers and assign the result
to an integer. Finally, display the value of all the
three variables.*/
#include <stdio.h>
int main(){
    float f1, f2;
    int result =0;
    printf("Enter the two floating point numbers:");
    scanf("%f %f",&f1,&f2);
    result = (int)(f1+f2);
    printf("%f %f %d",f1,f2,result);
    return 0;

}
