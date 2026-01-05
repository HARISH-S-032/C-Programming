// Get 5 numbers from user, remove the odd numbers and create a new array then print the same.

#include <stdio.h>
int main()
{
    int i,b,c=0;
    int x[5],y[c];
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2==0)
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