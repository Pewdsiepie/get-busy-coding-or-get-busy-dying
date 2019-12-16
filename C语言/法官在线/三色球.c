#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(x=0;x<=a;x++)
        for(y=0;y<=b;y++)
        for(z=0;z<=c;z++)
        if(x+y+z==10) count++;
    printf("%d",count);
    return 0;

}
