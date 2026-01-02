#include <stdio.h>
int main()
{
    int i, j, c=0, d = 0;
    for (i = 2; i <= 9; i++)
    {
        c=0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 0)
        {
            d++;
        }
    }
    printf("%d", d);
}
