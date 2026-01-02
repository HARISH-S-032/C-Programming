#include<stdio.h>
int main()
{
    int i=10,a,b=0;
    while(i<=99)
    {
        a=i%10;
        if(a==5)
        {
            b=b+i;
        }
        i++;
    }
    printf("%d",b);
}