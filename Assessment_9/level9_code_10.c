// Get 5 numbers from the user, remove the prime numbers, and create a new array, then print the same.

#include <stdio.h>
int main()
{
    int i,b=0,flag;
    int x[5],y[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        flag=0;
        for(int j=2;j<=x[i]/2;j++)
        {
            if(x[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1 || x[i]==1)
        {
            y[b]=x[i];
            b++;
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%d ",y[i]);
    }
}