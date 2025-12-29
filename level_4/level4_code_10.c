#include<stdio.h>
int main()
{
    int i,a=0;
    scanf("%d",&i);
    loop:if(i>0)
    {
        i=i/10;
        a++;
        goto loop;
    }
    printf("%d",a);

   
}
