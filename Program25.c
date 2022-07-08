//WAP TO PRINT FIRST 'n' ODD NUMBERS    
#include <stdio.h>
int main()
{
    int a=2,i,n,z;
    printf("Enter value of 'n' : ");
    scanf("%d",&n);
    for ( i = 0 ; i <=n-1 ; i++)
    {
        z=a*i+1;
        printf("%d\t",z);
    }
    
    return 0;
}