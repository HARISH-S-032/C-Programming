#include <stdio.h>
int main()
{
    int i,a,prime,b,c;
    scanf("%d",&i);
    a=2;
    while(a<i)
    {
        if(i%a==0)
        {
            b=i%10;
            c=i/10;
            if(b+c==14)
            {
                printf("Not a prime but sum of digit is 14");
            }
            else{
                printf("Not a prime & sum of digit is not 14");
            }
            return 0;
        }
        if(i%a!=0)
        {
            prime=1;
        }
        a++;
    }
    if(prime==1)
    {
        b=i%10;
        c=i/10;
        if(b+c==14)
        {
            printf("Prime & sum of digit is 14");
        }
        else{
            printf("Prime & sum of digit is not 14");
            }
        
    }
}