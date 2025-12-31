#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&i);
    for(a=0;i>=1;a++)
    {
        i=i/10;
    }
    printf("%d",a);
}