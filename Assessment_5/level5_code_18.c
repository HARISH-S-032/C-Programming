#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&i);
    a=i/100;
    
        for(j=2;j<=a/2;j++)
        {
            if(a%j==0)
            {
                printf("Not a Prime Number");
                return 0;
            }
        }
         printf("Prime Number");
}