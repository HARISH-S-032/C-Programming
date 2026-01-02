#include<stdio.h>
int main()
{
    int i=10,a=0,c=0;
    loop:if(i<100)
    {
        if(i%2 != 0) 
        {
            a=i/10;
            if(a==7)
            {
                c=c+i;
            }
            
        }
        i=i+1;
        goto loop;
    }
    printf("%d",c);
   
}
