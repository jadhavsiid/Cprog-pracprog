// WAP to calculate Simple intrest by accepting inputs from user.
#include<stdio.h>
int main()
{
    float p,r,n,si;
    printf("Enter value of principal amount(p): ");
    scanf("%f",&p);
    printf("Enter value of rate of intrest(r): ");
    scanf("%f",&r);
    printf("Enter value of no.of Years(n): ");
    scanf("%f",&n);
    si=p*r*n/100;
    printf("The required simple intrest is:%f",si);

    
    return 0;
}

