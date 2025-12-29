#include <stdio.h>
int main()
{
    int n, a, c,last, d = 1,result;
    scanf("%d", &n);
    a = n;
    last = n % 10;
    if(last%2 == 0)
    {
     loop : if (a >= 10)
       { a = a / 10;
        d = d * 10;
        goto loop;
       }
       a=a-1;
       c=n%d;
       result=a*d+c;
       printf("%d",result);
    }
    else
    printf("%d",n);

}