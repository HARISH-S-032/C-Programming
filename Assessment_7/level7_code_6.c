/*Write a loop program to print the two-digit
odd numbers, below 20.
Function Name : disp_2digit_odd_below20*/
#include<stdio.h>
 void disp_2digit_odd_below20();
 int a=10,b,c;
int main()
{
    disp_2digit_odd_below20();
}
void disp_2digit_odd_below20()
{
    while(a<20)
    {
       if(a%2==1)
       { printf("%d\n",a);}
        a++;
    } 
}