// WAP to calculate & display sum of square of first 'n' natural numbers
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter value of 'n' : ");
    scanf("%d",&n);
    for ( i = 0; i <=n ; i++)
    {
       sum= sum+i*i;
    }
    printf("The sum of squares of first 'n' natural numbers is: %d",sum);
    return 0;
}
    