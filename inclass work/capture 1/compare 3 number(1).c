#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int max;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)
      if(a>c)
      max=a;
      else
      max=c;
    else
      if(b>c)
      max=b;
      else
      max=c;
    return max;
}