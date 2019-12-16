#include<stdio.h>
int main()
{
    char arr[100];//定义一个字符数组
    char back[100];//定义一个备份数组
    scanf("%s",arr);//输入数组
    int i,j=0;
    int t=0;
    for(i=0;arr[i]!='\0';i++)//遍历数组
    {
        if(arr[i]>='0'&&arr[i]<='9'&&t==0)//如果是数字并且尚未遇到字母
        {
            back[j]=arr[i];//拷贝到备份字符数组
            j++;
        }
        else
        {
            printf("%c",arr[i]);//如果遇到字母了就开始打印
            t=1;//控制接下来的数字不用存到备份字符数组，直接打印
        }
    }
    for(i=0;back[i]!='\0';i++)//打印备份数组
    {
        printf("%c",back[i]);
    }
    return 0;
}
