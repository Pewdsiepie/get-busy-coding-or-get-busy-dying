#include<stdio.h>
#include<math.h>
int main(void)
{
	float sum,x,i,d,c;
	scanf("%f",&x);
	d=-1;
	c=-1;
	sum=x;
	i=2;
	while(fabs(c)>=0.00001)
	{
	  c=x/i;
	  c=c*d;
	  d=-1*d;
	  sum=sum+c;
	  i++;
    }
	printf("%.2f",sum);
}
