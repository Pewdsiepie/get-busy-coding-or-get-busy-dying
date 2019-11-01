#include <stdio.h>
int main()
{
	int a,b,c;

	scanf("%d",&a);
	b=a*a;
	c=b%10;
	if (c==a) printf("yes");
	else printf("no");

	return 0;
}
