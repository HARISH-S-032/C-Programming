// Write a program to print the total count of numberswhich are less than 100000 and whose sum ofdigits is 14.using for.

#include <stdio.h>
int main()      
{
    int i,sum,c=0;
    for(i=1;i<100000;i++)
    {
        sum=0;
        for(int j=i;j>0;j=j/10)
        {
            sum=sum+j%10;
        }
        if(sum==14)
        {
            c++;
        }
    }
    printf("%d",c);
}

