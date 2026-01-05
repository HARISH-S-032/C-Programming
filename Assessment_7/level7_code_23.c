/*Write a program get number from user print the total
number of single-digit perfect square numbers
in the number.
Function Name : disp_single_digit_square*/

#include<stdio.h>//no of single digit perfect square number
void disp_single_digit_square(int i);
int main()
{
    int a;
    scanf("%d",&a);
    disp_single_digit_square(a);
}
void disp_single_digit_square(int i)
{
    int b,c;
    for(;i>0;i/=10)
    {
       b=i%10;
       if(b==1||b==4||b==9)
       {
        c++;
       }
    }printf("%d",c);
}