/*Write a program to calculate salary of an employee
given his basic pay (to be entered by the user),
HRA = 10% of the basic pay, TA = 5% of basic pay.
Define HRA and TA as constants and use them to
calculate the salary of the employee.*/
#include <stdio.h>
int main(){

    float BP, salary;
    printf("enter the basic pay:");
    scanf("%f",&BP);

    float const HRA = 0.1;
    float const TA = 0.05;

    salary = BP + (HRA + TA)*BP;
    printf("Salary of the employee is %.2f",salary);
    return 0;

}