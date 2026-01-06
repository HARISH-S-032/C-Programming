/*Write a loop program to print sum of 1 to 5
Function Name : disp_sum*/
#include<stdio.h>//print sum 1 to 5
int disp_sum(int x);
int main()
{
    int a=1,b;
    b=disp_sum(a);
    printf("%d",b);
    return 0;
}
int disp_sum(int x)
{
    int y=0;
    for(;x<6;x++)
    {
      y=y+x;
    }
    return y;
}