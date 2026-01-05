// Write a program get number from user print the total number of single-digit perfect square numbers in the number.

#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        if(b==1 || b==4 || b==9)
        {
            c++;
        }
        a=a/10;
    }
    printf("%d",c);
}