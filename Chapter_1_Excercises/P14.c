/*Write a program to calculate area of a triangle
using function.*/
#include <stdio.h>

float areaoftriangle(float x, float y){
    float A = (0.5)*x*y;
    return A;
}
int main(){
    float b,h;
    printf("Breadth of the triangle:");
    scanf("%f",&b);
    printf("Height of the triangle:");
    scanf("%f",&h);
    float area = areaoftriangle(b,h);
    printf("Area of triangle = %.2f",area);
    return 0;

    }