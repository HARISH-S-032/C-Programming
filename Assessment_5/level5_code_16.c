#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    if(i==2)
    {printf("Prime Number");
        return 0;
    } 
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                printf("Not a Prime Number");
                return 0;
            }
        }
        {
            printf("Prime Number");
        }
}