#include<stdio.h>
int main()
{
	int m,n,a=1,b=1,c,d=1,i;
	double p;

	scanf("%d,%d",&m,&n);
	c=m-n;

	if(m<=n) p=0;
	else 
	{
		for(i=1;i<=m;i++)
		{a*=i;
		}
		for(i=1;i<=n;i++)
		{
			b*=i;
		}
		for(i=1;i<=c;i++)
		{
			d*=i;
		}
		p=a*1.0/(b*d);
	}
	printf("%.2lf",p);

	return 0;
}
