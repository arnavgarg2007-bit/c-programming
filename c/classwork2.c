#include<stdio.h>
int main()
{
    int vote;
    int x=0,y=0,z=0;
    printf("enter 1 for x\n enter 2 for y \n enter 3 for z \n");
    scanf("%d",&vote);            
    switch(vote)
{    
    case 1:
    x=x+1;
    break;

    case 2:
    y=y+1;
    break;

    case 3:
    z=z+1;
    break;
}


    if((x>y)&&(x>z))
{
    printf("winner is x");
}
  else  if((y>x)&&(y>z))
{
    printf("winner is y");
}
  else  if((z>x)&&(z>y))
{
    printf("winner is z");
} 
    return 0;
}
  
    


