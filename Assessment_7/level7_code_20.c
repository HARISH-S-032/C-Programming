/*Write a program print total number of single digit
Prime numbers
Function Name : disp_2digit_even_sum6*/
#include<stdio.h>// print total number of single digit prime number
 int disp_2digit_even_sum6(int i);
int main()
{
    int x,a=0;
    for(int i=2;i<10;i++)
    {
      x=disp_2digit_even_sum6(i);
      if(x==1){
        a=a+1;
      }
    }printf("%d",a);
} int disp_2digit_even_sum6(int i)
   {
    if(i==2)
    {
        return 1;
    }
    else
    {
         for(int j=2;j<i;j++)
         {
            if(i%j==0)
            {
                return 0;
            }
         }
    }return 1;

    }
   