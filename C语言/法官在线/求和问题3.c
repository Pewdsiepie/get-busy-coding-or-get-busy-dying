#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,i,t=0,sum,c,d;

  scanf("%d %d",&a,&b);
  if (a>b)
  {
    c=a;
    d=b;
  }
  else if (b>a)
  {
    c=b;
    d=a;
  }
  if (a==b)
  {
    sum=a;
  }
  else if(fabs(a-b)==1) sum=a+b;
  else if(fabs(a-b)>1)
  {
    for ( i = 1; (d+i)<c ; i++)
  {
    t=t+d+i;
  }
  sum=a+b+t;
  }
  printf("%d",sum);
  return 0;
  
}
