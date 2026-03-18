#include <stdio.h>

int main(){
    float radius, area=0;
    printf("Enter the radius of a circle: ");
    scanf("%f",&radius);
    area = 3.14 * radius *radius;
    printf("Area of circle is : %.2lf", area);
    return 0;

}