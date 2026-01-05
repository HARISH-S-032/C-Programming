// Write a program to get two numbers from user and print the HCF of those numbers.

#include <stdio.h>
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    if (a < b)
        i = a;
    else
        i = b;
    while (i >= 1)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d", i);
            break;
        }
        i--;
    }
    return 0;
}