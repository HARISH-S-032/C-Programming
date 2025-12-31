#include<stdio.h>
int main()
{
    int i,a,b;
    for(i=10;i<=99;i++)
    {
        if(i%2!=0)
        {
            a=i%10;
            b=i/10;
            if(a+b==7)
           { 
            printf("%d\n",i);
           }
        }
    }
}