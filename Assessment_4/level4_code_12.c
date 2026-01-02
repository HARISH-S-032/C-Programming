#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&i);
    loop:if(i>0)
    {
        a=i%10;
        i=i/10;
        printf("%d",a);
        goto loop;
    }
}
