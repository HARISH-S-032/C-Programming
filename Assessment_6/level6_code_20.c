// Write a program print total number of single digit Prime numbers

#include <stdio.h>

int main()
{
    int a = 2, b, c= 0;
    while (a <= 9)
    {
        b = 2;
        while (b < a)
        {
            if (a % b == 0)
                break;
            b++;
        }
        if (b == a)
            c++;
        a++;
    }
    printf("%d", c);
}
