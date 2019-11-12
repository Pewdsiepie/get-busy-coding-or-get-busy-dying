#include<stdio.h>
int main()
{
int i,n;
float r=0;
scanf("%d",&n);
for (i=1;i<=n;i++)
{
if(i%2==1) r+=1.0/(3*i-2);
else
r-=1.0/(3*i-2);
}
printf("%.3f",r);
   return 0;
}
