#include <stdio.h>

int main() 
{
	int a;
	float x,y;
	scanf("%d",&a);
	x=0.6*a;
	y=0.4*a+50;
	if(x>y) printf("%f\n",y);
	else printf("%f\n",x);
	return 0;
}	
