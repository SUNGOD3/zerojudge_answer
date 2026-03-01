#include <stdio.h>


int main() 
{

    int i, j;

    while(scanf("%d",&i)!=EOF)
    {
        j = 0;

        while(i)
        {
           j *= 10;
           j += i % 10;
           i /= 10;
        }
        printf("%d\n",j);

    }

    return 0;
}
