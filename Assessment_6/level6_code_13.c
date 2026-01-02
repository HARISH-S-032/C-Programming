#include<stdio.h>
int main()
{
    int i,b,c;
    scanf("%d",&i);
    c=i;
    while(c>=1)
    {
       b=c%10;
       c=c/10;
       printf("%d",b);
    }
}