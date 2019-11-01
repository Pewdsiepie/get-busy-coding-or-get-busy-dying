#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;

	scanf("%lf",&x);
	if (x<1) 
	{
		y=cos(x+2);
		printf("%.2lf",y);
	}
	else
	{
		y=sqrt(x-1);
		printf("%.2lf",y);
	}

	return 0;
}
