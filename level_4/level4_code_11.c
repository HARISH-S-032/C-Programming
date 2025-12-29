#include<stdio.h>
int main()
{
    int i,a=0,b;
    scanf("%d",&i);
    loop:if(i>0)
    {
        a=i%10;
        i=i/10;
        b=b+a;
        goto loop;
    }
    printf("%d",b);

   
}
