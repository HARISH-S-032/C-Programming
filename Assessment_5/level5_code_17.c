#include<stdio.h>
int main()
{
    int i,j,a,b;
    scanf("%d",&i);
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                a=i%10;
                b=i/10;
                if(a+b==14)
                {
                    printf("Not a prime number but sum of digits is 14");
                }
                else
                {
                    printf("Not a prime number and sum of digits is not 14");
                }
                return 0;
            }
        }
        a=i%10;
                b=i/10;
                if(a+b==14)
                {
                    printf("Prime Number and sum of digits is 14");
                }
                else
                printf("Prime Number and sum of digits is not 14");
}