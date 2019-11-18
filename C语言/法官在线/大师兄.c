#include<stdio.h>
int main()
{
  int T,N,m,i,A,B;
  scanf("%d",&N);
  if(N<6) m=0;
  else
  {
    T=N/7;
    m=2*T;
    i=N%7;
    if (i<=5)
    {
      m=m;
    }
    else
    {
      m=m+1;
    } 
  }
  printf("%d",m);

  return 0;
}
