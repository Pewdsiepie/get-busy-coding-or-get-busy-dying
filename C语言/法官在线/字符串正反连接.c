#include<stdio.h>
#include<string.h>
#define N 50
int main()
{
    int len,i;
    char a[N],b[N];
    gets(a);
    len=strlen(a);
    for ( i = 0; i < len; i++)
    {
        b[i]=a[len-1-i];
    }
    b[len]='\0';
    puts(strcat(a,b));
    return 0;
}
