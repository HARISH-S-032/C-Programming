#include <stdio.h>

int main()
{
    int n, a, last, digits = 1, middle;
    scanf("%d", &n);

    a = n;
    last = n % 10;
loop:
    if (a >= 10)
    {
        a = a / 10;
        digits = digits * 10;
        goto loop;
    }
    
    middle = (n % digits) / 10;
    n = last * digits + middle * 10 + a;
    printf("%d", n);
}
