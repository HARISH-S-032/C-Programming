// Get 5 numbers from user and print the smallest number

#include<stdio.h>
int main()
{
    int i,j,k;
    int x[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    k=x[0];
    for(j=1;j<5;j++)
    {
        if(x[j]<k)
        {
            k=x[j];
        }
    }       
    printf("%d",k);
}