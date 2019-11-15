#include<stdio.h>
int main()
{
	int X;
	double Y;

	scanf("%d",&X);

	if (X<0) Y=0;
	else if(X>=0&&X<=15) Y=X*4.0/3;
	else if(X>15) Y=2.5*X-10.5;

	printf("%.2lf",Y);

	return 0;
}
