// WAP to Convert temperature from celcius into farenhiet
#include<stdio.h>
int main()
{
    float c,f;
    
    printf("Enter value of Temperature in farenhiet (f): ");
    scanf("%f",&f);
     c=(f-32)/1.8;
    printf("The value of Temperature in Celcius is:%f",c);
    
    return 0;
}
