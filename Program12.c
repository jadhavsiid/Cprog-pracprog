//WAP to find greatest of 2 entered numbers from user
#include <stdio.h>
int main()
{
    int a,b,z;
    printf("Enter any 2 numbers: ");
    scanf("%d%d",&a,&b);
    z=(a>b)?a:b;
    printf("The greatest of above two numbers is: %d",z);
    return 0;
}