// WAP to display 2-digit number in reversed form
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any two digit number: ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    printf("The Entered two digit number in reversed form is: %d%d",b,c);
    return 0;
}
