#include<stdio.h>
int main()
{
  int num,i,a=1,sum=0;
  scanf("%d",&num);
  if(num==0)
  {
      i=1;
      sum=0;
  }
  else
  {
      for ( i = 0; num!=0; i++)
    {
        sum=sum+num%10;
        num=num/10;
    }
  }
  printf("n=%d;sum=%d",i,sum);

  return 0;
}
