// WAP To Accept a 3-digit no and then display digits seperately
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 3-digit number : ");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=a/100;
    printf("%d\n",d);
    printf("%d\n",c);
    printf("%d\n",b);
    return 0;
}