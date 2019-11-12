#include<stdio.h>

int main()
{
    int m,w,c;
    for(m=0;m<15;m++)
    for (w=0;w<22;w++)
    for(c=0;c<45;c+=2)
    if (m+w+c==45&&3*m+2*w+c/2==45)
    {
        printf("men=%d women=%d child=%d\n",m,w,c);     
    }
    return 0;
    
}
