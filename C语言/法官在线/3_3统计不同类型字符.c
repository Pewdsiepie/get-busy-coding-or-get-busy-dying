#include<stdio.h>
int main()
{
    char c;
    int l=0,b=0,d=0,o=0;
    while ((c=getchar())!=';')
    {
        if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            l++;
        }
        else if (c>='0'&&c<='9')
        {
            d++;
        }
        else if (c==' ')
        {
            b++;
        }
        else
        {
            o++;
        }
    }
    printf("character=%d,blank=%d,digit=%d,other=%d;",l,b,d,o);
    return 0;
}
