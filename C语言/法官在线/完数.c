#include<stdio.h>

int main()
{
    int i, j, sum=1; 

    scanf("%d",&i);
        for (j = 2; j <= i / 2; j++)
            if (i%j == 0)
                sum += j;

        if (sum == i) 
        {
            printf("yes ");
        }
        else if (sum!=i)
            printf("no");

    return 0;
}
