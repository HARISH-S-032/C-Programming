#include<stdio.h>
int main()
{
    int i,j,a,b;
    scanf("%d",&i);
    a=i/10;
    b=a%100;
    
        for(j=2;j<=b/2;j++)
        {
            if(b%j==0)
            {
                printf("Not a Prime Number");
                return 0;
            }
        }
        {
            printf("Prime Number");
        }
}