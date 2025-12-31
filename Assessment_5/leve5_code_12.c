#include<stdio.h>
int main()
{
    int i,a,b,c,d=0;
    scanf("%d",&i);
    c=i;
    for(a=0;c>=1;a++)
    {
        b=c%10;
        c=c/10;
        d=d+b;
    }
    printf("%d",d);
}