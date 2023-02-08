#include<stdio.h>
int main()
{
  int a=10,b=50,c=30;
  if((a>b)&&(a>c))
     printf("a is greatest");
  if((b>a)&&(b>c))
     printf("b is greatest");
  if((c>a)&&(c>b))
     printf("c is greatest");
  return 0;
}