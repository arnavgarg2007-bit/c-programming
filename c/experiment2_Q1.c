#include<stdio.h>
int main()
{
    int length,width;
    printf("enter the value");
    scanf("%d",&length);
    scanf("%d",&width);

    int area=length*width;
    printf("%d\n",area);

    int perimeter=2*(length+width);
    printf("%d",perimeter);
    return 0;
}