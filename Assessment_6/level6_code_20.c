#include <stdio.h>
int main()
{
    int a,c=0,b=3,prime=1;
    while(b<=9)
    {
    a=2;
    while(a<b)
    {
        if(b%a==0)
        {
           
        }
        if(b%a!=0)
        {
            prime=1;
            c++;
        }
        a++;
    }
    if(prime==1)
    {
        c++;
    }
    b++;
}
c=c+1;
printf("%d",c);
}