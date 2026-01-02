#include<stdio.h>
int main()
{
    int i=10,a,b=0;
    while(i<=99)
    {
        if(i%2!=0)
        {
            a=i/10;
            if(a == 7)
            {
                b=b+i;
            }

        }
        i++;
    }
    printf("%d",b);
}