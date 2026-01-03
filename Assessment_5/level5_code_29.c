// Write a program to get three numbers from user and print the LCM of those numbers. using for.

#include <stdio.h>
int main()
{
    int a,b,i,j,c;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=a*b*c;i++)
    {
        if(i%a==0 && i%b==0 && i%c==0)
        {
            j=i;
            break;
        }
    }
    printf("%d",j);
}