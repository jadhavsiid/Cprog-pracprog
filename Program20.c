//Wap to accept float type data and display its integer part to user:
#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter a float type data: ");
    scanf("%f",&b);
    a=(int)b;
    printf("The integer part of entered float data is:%d",a);
    
    return 0;
}
