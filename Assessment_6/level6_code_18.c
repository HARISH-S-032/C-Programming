#include <stdio.h>
int main()
{
    int i,a,prime,b;
    scanf("%d",&i);
    b=i%100;
    a=2;
    while(a<b)
    {
        if(b%a==0)
        {
            printf("Not Prime");
            return 0;
        }
        if(b%a!=0)
        {
            prime=1;
        }
        a++;
    }
    if(prime==1)
    {
        printf("Prime");
    }
}