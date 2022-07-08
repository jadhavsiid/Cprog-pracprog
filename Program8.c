//WAP to Convert entred distance into m,f,cm,inch from km
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter the distance in kilometers (Km): ");
    scanf("%f",&a);
    b=a*1000;
    printf("The distance in Meter is:%f\n",b);
    c=a*3280.24;
    printf("The distance in Foot is:%f\n",c);
    d=a*100000;
    printf("The distance in centimeter is:%f\n",d);
    e=a*39370.1;
    printf("The distance in inch is:%f\n",e);

    return 0;
}
