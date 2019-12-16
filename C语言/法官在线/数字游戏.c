#include<stdio.h>
int main()
{


int i,j,k,n=0,x; //n用于统计个数
scanf("%d",&x);
for(i=x;i<(x+4);i++)

for(j=x;j<(x+4);j++)

for(k=x;k<(x+4);k++)

//保证三位数不重复

if(i!=j&&i!=k&&j!=k)

{

n++;

printf("%d%d%d ",i,j,k);

if(n%6==0)

printf("\n");

}
return 0;

}
