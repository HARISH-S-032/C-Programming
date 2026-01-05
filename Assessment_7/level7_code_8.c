/*Write a loop program to print the two-digit even
numbers, who's sum of digits are 6.
Function Name : disp_2digit_even_sum6*/
#include<stdio.h>
 void disp_2digit_even_sum6();
 int a=10,b,c;
int main()
{
    disp_2digit_even_sum6();
}
void disp_2digit_even_sum6()
{
    while(a<100)
    {
        b=a%10;
        c=a/10;
       if((a%2==0)&&(b+c==6))
       { printf("%d\n",a);}
        a++;
    } 
}