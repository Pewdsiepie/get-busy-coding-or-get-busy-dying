#include <stdio.h>
int main()
{
    int n,s1,s2,i,count=0,hours=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&s1,&s2);
        if(s1>=90&&s1<=140&&s2<=90&&s2>=60)
        {
        count++;
        if (count>=hours)
        {
            hours=count;
        }
        }
        
        else count=0;
        
    }
    printf("%d",hours);
}
