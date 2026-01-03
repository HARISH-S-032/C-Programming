// Write a program get number from user print the total number of single-digit prime numbers in the number.

#include <stdio.h>
int main()
{
    int i, j, c=0, d = 0,a,b;
    scanf("%d",&a);
    for (i = a; i > 0; i=i/10)
    {
        b=i%10;
        c=0;
        for (j = 1; j <= b; j++)
        {
            if (b % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            d++;
        }
    }
    printf("%d", d);
}
