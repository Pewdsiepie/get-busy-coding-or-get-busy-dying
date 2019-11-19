#include<stdio.h>
#include<math.h>
int main()
{
  int i,t,a=1,b;
  double sum=1,term=1,x;

  scanf("%lf",&x);

  for (i=1; fabs(term)>(1e-5); i++)
  {
    a*=i;
    b=pow(x,i);
    term=b*1.0/a;
    sum=sum+term;
  }
  printf("%.3lf",sum);

  return 0;
}
