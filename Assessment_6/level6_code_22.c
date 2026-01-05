// Write a program get number from user print the total number of two-digit odd numbers in the number.

#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    while(a>9)
    {
        b=a%100;
        if(b%2!=0)
        {
            c++;
        }
        a=a/10;
    }
    printf("%d",c);
}