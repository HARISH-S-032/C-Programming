/*Write a program to get a number from user and if
the last digit of the number is even print the
same number. If the last digit of the number is
odd, then subtract 1 from the last digit and
print the number. (Note: Last digit -MSB)
Function Name : check_last_digit_odd*/

#include<stdio.h>//if last digit is even print number otherwise subract 1 from msb
void check_last_digit_odd(int x);
int main()
{
    int a;
    scanf("%d",&a);
    check_last_digit_odd(a);
    
}
 void check_last_digit_odd(int x)
 {
    if((x%10)%2==0)
    {
        printf("%d",x);

    }
    else
    {
    int z=0,y=1,w=x;
    for(;x>10;x/=10)
    {
        y=y*10;
    }
    z=w-y;
    printf("%d",z);}
 }