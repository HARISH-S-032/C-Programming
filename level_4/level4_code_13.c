#include <stdio.h>

int main()
{
    int n, a, last, d= 1, mid;
    scanf("%d", &n);
    a = n;
    last = n % 10;
loop:
    if (a >= 10)
    {
        a = a / 10;
        d = d * 10;
        goto loop;
    }
    mid = (n % d) / 10;
    n = last * d + mid * 10 + a;
    printf("%d", n);
}
