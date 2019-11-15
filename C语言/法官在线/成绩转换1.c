#include<stdio.h>
int main()
{
	int N,i;
	float a;

	scanf("%d",&N);
	
	for(i=1;i<=N;i++)
	{
		scanf("%f",&a);
		if(a>=90&&a<=100) printf("excellent\n");
		if(a>=80&&a<=89) printf("good\n");
		if(a>=70&&a<=79) printf("soso\n");
		if(a>=60&&a<=69) printf("pass\n");
		if(a>=0&&a<=59) printf("fail\n");
		if(a<0||a>100) printf("wrong\n");
	}

	return 0;
}
