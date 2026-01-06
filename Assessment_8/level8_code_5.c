/*Write a program to get a number from user print
the total number of digits in that number
Function Name : count_total_digits*/
#include<stdio.h>
int count_total_digits(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=count_total_digits(a);
    printf("%d",b);
    return 0;
}
int count_total_digits(int x)
{
    int y=0;
    for(;x>0;x/=10)
    {
      y=y+1;
    }
    return y;
}