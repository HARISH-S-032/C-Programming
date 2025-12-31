#include<stdio.h>
int main()
{
    int i,a,b=0;
    for(i=10;i<=99;i++)
    {
       if(i%2 != 0)
       {
        a=i/10;
        if(a==7)
        {
            b=b+i;        }
       }
    }
    printf("%d",b);
}