/*Write a loop program to print the sum of two-digit
numbers whose one's digit is 5.
Function Name : disp_2digit_ones5*/
#include<stdio.h>
 void disp_2digit_ones5();
 int a=10,b,c;
int main()
{
    disp_2digit_ones5();
}
void disp_2digit_ones5()
{
    while(a<100)
    {
        b=a%10;
        if(b==5)
        { c=c+a;}
        a++;
    } 
    printf("%d\n",c);
}