#include<stdio.h>

int main()

{

int m,i
float sum,y=1;

scanf("%f",&m);

for(i=1;i<=m;i++)

{

y+=1.0/(2*i+1);

}

printf("%f",y);

return 0;

}
