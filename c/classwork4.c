#include<stdio.h>
int main()
{
    float i,n;
    printf("enter the value");
    scanf("%f",&n);
    float sum=0;

    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }

    printf("%f",sum);
    return 0;
}

   