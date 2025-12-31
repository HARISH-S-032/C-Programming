#include<stdio.h>
int main()
{
    int i,j,c=0,a;

        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        a=10-c;
        printf("%d",a);
        
}