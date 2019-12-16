#include<stdio.h>
#include<string.h>
#define N 1000
int main()
{
    char a[N],b[N],c[N],d[N];
    int len1,len2,len3,len4,max;
    gets(a);
    gets(b);
    gets(c);
    gets(d);
    len1=strlen(a);
    len2=strlen(b);
    len3=strlen(c);
    len4=strlen(d);
    max=len1;
    if(len2>max) max=len2;
    if(len3>max) max=len3;
    if(len4>max) max=len4;
    if(max==len1) printf("%c",a[0]);
    if(max==len2) printf("%c",b[0]);
    if(max==len3) printf("%c",c[0]);
    if(max==len4) printf("%c",d[0]);
    return 0;
}
