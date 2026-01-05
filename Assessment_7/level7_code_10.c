/*Write a loop program to print the sum of two-digit
odd numbers, whose ten's digit is 7.
Function Name : disp_2digit_odd_sum_tens7*/
#include<stdio.h>//print sum of 2digit odd number whose ten's digit is 7
 void disp_descend();
 int a=10,b,c;
int main()
{
    disp_descend();
}
void disp_descend()
{
    while(a<100)
    {
        //b=a%10;
        c=a/10;
       if((a%2==1)&&(c==7))
       {b=b+a; }
        a++;
    } printf("%d\n",b);
}