// Write a program to get two numbers from user and print the HCF of those numbers.

#include <stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            j=i;
            break;
        }
    }
    printf("%d",j);
}