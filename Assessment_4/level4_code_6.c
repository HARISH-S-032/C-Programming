#include<stdio.h>
int main()
{
    int i=10,a,b;
    loop:if(i<100)
    {
        if(i%2 != 0) //check 2 digit odd number
        {
            a=i%10;
            b=i/10;
            if(a+b == 7) //check sum of digit is 7
            {
                printf("%d\n",i); 
            }
        }
        i=i+1;
        goto loop;
    }

   
}
