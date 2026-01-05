/*Write a program to get a number from user, print
whether that number is prime, and sum of
digit is equal to 14.
Function Name : check_prime_and sum14*/

#include<stdio.h>
void check_prime(int x);// check prime or not
int main()
{
    int a;
    scanf("%d",&a);
    check_prime(a);
}
 void check_prime(int x)
{
    int y=0;
    if(x==2)
    {
        printf("Prime");
    }
    else
    {
        for(int i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
              y=1;
              break;
            }
        }if(y==0)
        {
            printf("prime & ");
        }
        else
        {
            printf("not prime & ");
        }
        y=0;
    }for(;x>0;x/=10)
    {
       y=(x%10)+y;
    }if(y==14)
    {
        printf("sum of the digit is 14");
    }else
    {
         printf("sum of the digit is not 14");
    }
}