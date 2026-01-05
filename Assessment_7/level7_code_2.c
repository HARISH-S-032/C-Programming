/*Write a loop program to print 5 to 1 on
one by one.
Function Name : disp_descend*/

#include<stdio.h>
int a=5,b,c;
 void disp_descend();
int main()
{
    disp_descend();
}
void disp_descend()
{
    while(a>0)
    {
        printf("%d\n",a--);
    }
}