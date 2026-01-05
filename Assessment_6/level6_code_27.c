// Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14. using while loop.

#include <stdio.h>
int main()
{
    int i = 1, a, b, c = 0;
    while (i < 100000)
    {
        a = i;
        b = 0;
        while (a > 0)
        {
            b = b + (a % 10);
            a = a / 10;
        }
        if (b == 14)
        {
            c++;
        }
        i++;
    }
    printf("%d", c);
}



