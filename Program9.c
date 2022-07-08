//WAP to find Area and Perimeter of rectangle by entering length & breadth
#include<stdio.h>
int main()
{
    float l,b,a,p;
    printf("Enter length of a rectangle: ");
    scanf("%f",&l);
    printf("Enter breadth of a rectangle: ");
    scanf("%f",&b);
    a=l*b;
    printf("The area of rectangle is:%f\n",a);
    p=2*(l+b);
    printf("The Perimeter of rectangle is:%f\n",p);

    return 0;
}
