#include<stdio.h>
int main()
{
    int i,j,a,b=1,c,d;
    scanf("%d",&i);
    j=i%10;
    a=i;
    if(j%2!=0)
    {
        while(a>=10)
    {
        a=a/10;
        b=b*10;
    }
    c=i/b;
    c=c-1;
    printf("%d",c);
    printf("%d",d=i%b);
    }
}