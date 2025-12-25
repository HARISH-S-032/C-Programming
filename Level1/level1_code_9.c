#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    b=a%10;
    c=c+b;
    a=a/10;
    b=a%10;
    c=c+b;
    a=a/10;
    b=a%10;
    c=c+b;
    printf("%d",c);

}