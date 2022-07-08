//WAP To find a roots of quadratic equation by accepting variables:
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float X1,X2;
    printf("Enter values of a,b,c from Quadratic Equation:\n");
    scanf("%d%d%d",&a,&b,&c);
    X1=(-b+pow((b*b-4*a*c),0.5))/(2*a);
    X2=(-b-pow((b*b-4*a*c),0.5))/(2*a);
    printf("The roots of the Quadratic Equations will be:%f & %f\n",X1,X2);

    return 0;
}
