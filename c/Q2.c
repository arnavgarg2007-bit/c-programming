#include<stdio.h>
int main()
{
    int n,p;
    printf("enter the number");
    scanf("%d",&n);
    p=1;
    while(n>0){
        p=p*n;
        n=n-1;
    }
    printf("factorial is  = %d ",p);

}