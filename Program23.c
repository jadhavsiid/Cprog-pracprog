//WAP to find Factorial of a number:
#include <stdio.h>
int main()
{
    int i, n, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1,fact=1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The Factorial of Entered number is : %d", fact);

    return 0;
}
