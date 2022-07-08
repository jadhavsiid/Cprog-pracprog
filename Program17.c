// WAP To Check Entered number is Even or Odd
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a % 2;
    (b == 0) ? printf("The Entered number is Even") : printf("The Entered number is Odd");
    return 0;
}
