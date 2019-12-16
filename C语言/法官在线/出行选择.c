#include<stdio.h>
int main()
{
    int M,t1,t2,walk=0,bike=0;
    scanf("%d",&M);
    for(t1=1;walk<=M;t1++)
    {
        walk=1.2*t1;
    }
    for (t2= 1; bike<=M; t2++)
    {
        bike=3*t2;
    }
    t2=t2+27+23;
    if (t1>t2) printf("Bike");
    else printf("Walk");
    return 0;
    
}
