#include <stdio.h>
int main()
{
    int n, a, c,last, digits = 1,result;
    scanf("%d", &n);
    a = n;
    last = n % 10;
    if(last%2 == 0)
    {
     loop : if (a >= 10)
       { a = a / 10;
        digits = digits * 10;
        goto loop;
       }
       a=a-1;
       c=n%digits;
       result=a*digits+c;
       printf("%d",result);
    }
    else
    printf("%d",n);

}