#include<stdio.h>
int main()
{
    int i,count=0,avg,sum=0;
    for(i=1;i<=70;i++)
    {
        if(i%2!=0){
        count=count+1;
        if(count<=15){
            sum=sum+i;
            avg=sum/15;
        }
        }
    }
    printf("the sum is:%d\n",sum);
    printf("the average is:%d",avg);
    return 0;

    
}