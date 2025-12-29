#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%100;
    c=a/100;
    
    printf("%d",b==c);
}