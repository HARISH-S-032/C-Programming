/*Write a program to get a number from user print
the total number of digits in that number
Function Name : count_total_digits*/
#include<stdio.h>
void count_total_digits(int x);
int main()
{
    int a;
    scanf("%d",&a);
    count_total_digits(a);
}
 void count_total_digits(int x)
{
    int b;
    for(;x>0;x/=10)
    {
      b++;
    }printf("%d",b);
}