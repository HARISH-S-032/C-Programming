// Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        if(b%2!=0)
        {
            c++;
        }
        a=a/10;
    }
    printf("%d",c);
}