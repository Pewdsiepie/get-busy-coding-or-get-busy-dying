#include<stdio.h>
int main()
{
	int a,b;
	double c;
	char o;
	scanf("%d%c%d",&a,&o,&b);

	if(o=='+')
	{

		printf("%d%c%d=%d",a,o,b,a+b);
	}
	else if(o=='-')
	{
		printf("%d%c%d=%d",a,o,b,a-b);
	}
	else if(o=='/'&&b!=0)
	{
		c=a*1.0/b;
		printf("%d%c%d=%.2lf",a,o,b,c);
	}
	else if(o=='/'&&b==0) printf("divide by 0!");
	else if(o=='x')
	{
		printf("%d%c%d=%d",a,o,b,a*b);
	}
	else if (o!='+'&&o!='-'&&o!='/'&&o!='x')
	{
		printf("error input!");
	}
	return 0;
}
