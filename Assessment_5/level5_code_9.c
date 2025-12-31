#include<stdio.h>
int main()
{
    int i,a,b=0;
    for(i=10;i<=99;i++)
    {
        a=i%10;
        if(a==5)
        {
            b=b+i;      
        }
    }
    printf("%d",b);
}