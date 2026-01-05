/*Write a loop program to print the two-digit
odd numbers, who's sum of digits are 7.
Function Name : disp_2digit_odd_sum7*/
#include<stdio.h>
 void disp_2digit_odd_sum7();
 int a=10,b,c;
int main()
{
    disp_2digit_odd_sum7();
}
void disp_2digit_odd_sum7()
{
    while(a<100)
    {
        b=a%10;
        c=a/10;
       if((a%2==1)&&(b+c==7))
       { printf("%d\n",a);}
        a++;
    } 
}