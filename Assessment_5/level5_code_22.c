// Write a program get number from user print the total number of two-digit odd numbers in the number.

#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(int i=a;i>9;i=i/10)
    {
        b=i%100;
        if(b%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}
