#include <stdio.h>
int main()
{
    int i,a,prime,b,c;
    scanf("%d",&i);
    b=i/1000;
    c=b%100;
    a=2;
    while(a<c)
    {
        if(c%a==0)
        {
            printf("Not Prime");
            return 0;
        }
        if(c%a!=0)
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