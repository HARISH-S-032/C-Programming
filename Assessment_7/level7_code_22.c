/*Write a program get number from user print the total
number of two-digit odd numbers in the
number.
Function Name : disp_total_2digit_odd*/

#include<stdio.h>// print total  number of two digit odd number
 int disp_total_odd_digit(int i);
int main()
{
    int a;
   scanf("%d",&a);
   disp_total_odd_digit(a);
}
 int disp_total_odd_digit(int i)
   {int b,c=0;
    while(i>=10)
    {
        b=i%100;
        if(b%2==1)
        {
            c++;
        }
        i/=10;
    }printf("%d",c);
    return 0;

}
   