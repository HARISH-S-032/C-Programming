#include<stdio.h>
int main()
{
    int i,a=0,b,c;
    scanf("%d",&i);
    c=i;
    while(c>=1)
    {
       b=c%10;
       c=c/10;
       a=a+b;
    }
    printf("%d",a);
}