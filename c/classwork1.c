#include<stdio.h>
int main()
{
  int sub1,sub2,sub3,sub4,sub5;
  printf("enter the marks");
  scanf("%d",&sub1);
  scanf("%d",&sub2);
  scanf("%d",&sub3);
  scanf("%d",&sub4);
  scanf("%d",&sub5);
  int total;
  total=sub1+sub2+sub3+sub4+sub5;
  int percentage;
  percentage=(total/5);

  if ((percentage>85))
{
     printf("your grade is O");
}
  else if ((percentage>75))
{ 
     printf("your grade is A");
}
  else if ((percentage>60))
{
     printf("your grade is B");
}
  else if ((percentage>40))
{
     printf("your garde is C");
}
  else if ((percentage>35))
{
     printf("your grade is D");
}
  else 
{ 
    printf("your grade is f");
}
   
  
  return 0;
}




  

