#include <stdio.h>

int main()
{
    int j, i;
    for(j=1; j<=5; j++)
    {
        for(i=1; i<=6-j; i++)
            printf("%d  ", i);
        printf("\n");
    }
    return 0;
}
