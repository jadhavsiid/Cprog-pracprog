// WAP to do Product of integer and float value by accepting it from user
#include<stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Enter integer value: ");
    scanf("%d",&a);
    printf("Enter Float value: ");
    scanf ("%f",&b);
    c=a*b;
    printf("The product of a float and integer value you entered is: %f",c);
    return 0;
}
