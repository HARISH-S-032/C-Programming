/*Write a loop program to print 1 to 5 on one by
one.*/
#include<stdio.h>
void disp_assend(int x);
int main()
{
    int x=5;
    disp_assend(x);
}
 void disp_assend(int x)
{
    for(int i=1;i<=x;i++ )
    {
        printf("%d\n",i);
    }
}