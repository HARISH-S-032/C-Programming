#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%100;
    c=a/100;
    if(b==c)
    {
        printf("Sucssess");
    }
    else
    printf("Failure");
}