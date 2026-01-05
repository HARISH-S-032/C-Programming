/*Write a loop program to print sum of 6 to 1
Function Name : disp_rsum*/
#include<stdio.h>
 void disp_rsum();
 int a,b,c;
int main()
{
    disp_rsum();
}
void disp_rsum()
{
    while(a<6)
    {
       a++;
       b=b+a;
    } printf("%d\n",b);
}