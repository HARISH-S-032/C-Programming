/*Write a program to get two numbers from user and
print the HCF of those numbers.
Function Name : disp_count_HCF2*/

#include<stdio.h>//hcf of 2 numbers
void disp_count_hcf2(int a,int b);
int main()
{
    int c,d;
    scanf("%d %d",&c,&d);
    disp_count_hcf2(c,d);
}
void disp_count_hcf2(int a,int b)
{int temp;
    while(b!=0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);
}