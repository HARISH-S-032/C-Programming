#include<stdio.h>
int main()
{
    int i,a,b=0;
    scanf("%d",&i);
    a=i;
    while(a>=1)
    {
        a=a/10;
        b++;
    }
    printf("%d",b);
}