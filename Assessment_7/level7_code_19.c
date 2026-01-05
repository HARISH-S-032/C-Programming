/*Write a program to get a 4-digit number from user,
print whether that number's middle two digits
(hundred's digit and ten's digit) is prime.
Function Name : middle_2digits_prime*/

#include<stdio.h>
void check_prime(int x);// check  middle number(ten's and hundred's) is prime or not
int main()
{
    int a;
    scanf("%d",&a);
    a=a/10;
    a=a%100;
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
            printf("prime");
        }
        else
        {
            printf("not prime");
        }
    }
}