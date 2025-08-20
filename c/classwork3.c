#include<stdio.h>
int main()
{ 
    int a,b,c;
    printf("enter coefficients a, b and c: ");
    scanf("%d",&a);
    scanf("%d",&b); 
    scanf("%d",&c);
    int d;
    d=(b*b)-(4*a*c);
    
   if ((d>0))
{ 
    printf("real and distinct roots");
}
  else if ((d==0))
{
    printf("real and equal roots");
}

  else if ((d<0))
{
    printf("imaginary roots");
}
     return 0;
}