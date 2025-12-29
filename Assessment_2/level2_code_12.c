#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    c=c%10;
    
    printf("%d",c==b);
}