// Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(int i=a;i>0;i=i/10)
    {
        b=i%10;
        if(b%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}