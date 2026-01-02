#include<stdio.h>
int main()
{
    int i,j,a,b=1,c,d,e;
    scanf("%d",&i);
    j=i%10;
    a=i;
    while(a>=10)
    {
        a=a/10;
        b=b*10;
    }
    c=i/b;
    d=(i%b)/10;
    e=j*b+d*10+c;
    printf("%d",e);
}