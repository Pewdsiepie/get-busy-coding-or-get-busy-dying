#include <stdio.h>

int main() 
{
	float f,c;
	printf("Please input f: ");
	scanf("%f",&f);
	c=5.0/9*(f-32);
	printf("%.2f",c);
	return 0;
}
