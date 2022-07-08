// WAP To Swap two numbers
#include <stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter value of a: ");
  scanf("%d",&a);
  printf("Enter value of b: ");
  scanf("%d",&b);
  temp=a;
  a=b;
  b=temp;
  printf("The value of a after swapping is :%d\n",a);
  printf("The value of b after swapping is :%d",b);

  return 0;
}