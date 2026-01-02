#include<stdio.h>
int main()
{
    int i=10,a,b;
    loop:if(i<100)
    {
        if(i%2 == 0) //check 2 digit even number
        {
            a=i%10;
            b=i/10;
            if(a+b == 6) //check sum of digit is 6
            {
                printf("%d\n",i); 
            }
        }
        i=i+1;
        goto loop;
    }

   
}
