//WAP to Calculate Gross salary by accepting basic salary as a input from keyboard.
#include <stdio.h>
int main()
{
    float a,b,c,Gross;
    printf("Enter your basic salary: ");
    scanf("%f", &a);
    b=0.4*a;
    c=0.5*a;
    Gross=a+b+c;
    printf("Your Gross Salary is:%f",Gross);
    return 0;
}
