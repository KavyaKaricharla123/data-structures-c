/*Write a program to calculate simple interest and
compound interest.*/
#include <stdio.h>
#include <math.h>
int main(){
    float SI=0, CI=0;
    float p,r,t;
    printf("Enter principle:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter time in years:");
    scanf("%f",&t);

    SI = (p*r*t)/100;
    CI = (p*pow((1+(r/100)),t))-p;
    printf("simple interest = %.2f\n",SI);
    printf("compound interest = %.2f",CI);
    
    
    
}