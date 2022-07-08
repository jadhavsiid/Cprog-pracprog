//WAP to find greatest of Three numbers accepting from user
#include <stdio.h>
int main()
{
    int a,b,c,z;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    z=(a>b)?((a>c)?a:b):((b>c)?b:c);
    printf("The greatest among these 3 is: %d",z);
    return 0;
}
