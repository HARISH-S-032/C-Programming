#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/100;
    printf("%d",b);
    b=a%100;
    c=b%10;
    printf("%d",c);
    c=b/10;
    printf("%d",c);

}