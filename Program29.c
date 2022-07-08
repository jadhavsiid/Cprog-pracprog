// WAP To Display First 'n' Elements of Fibonacci Series
#include <stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the value of 'n': ");
    scanf("%d",&n);
    printf("Fibonacci Series: \n 0 \n 1 \n");
    for ( i =1; i <=n-2; i++)
    {
       c=a+b;
       printf(" %d\n",c);
       a=b;
       b=c;
       
    }
    

    return 0;
}